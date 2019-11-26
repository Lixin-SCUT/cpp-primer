#pragma once
#ifndef VEC_H
#define VEC_H
#include <iostream>  
#include <string>  
#include <memory> //allocator  
#include <utility>    //move  
#include <initializer_list>  
#include <algorithm>  //for_each  
template<class T>
class Vec
{
	std::allocator<T> alloc;//Ϊ����Vec��������ڴ���  
	void chk_n_alloc()      //���ʣ��ռ�Ϊ0�ͷ����¿ռ�  
	{
		if (size() == capacity())
			reallocate();
	}
	std::pair<T *, T *> alloc_n_copy(const T *b, const T *e);//����һ������Ϊb��e֮���Ԫ�صĶ��󣬲�������������һ��ͷβָ��  
	void free();//�ͷ�����alloc����������ڴ�  
	void reallocate();//�ƶ���ǰ�����Ԫ�ص�2�������С���¶�����  
	T *elements;
	T *first_free;
	T *cap;
public:
	Vec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	Vec(std::initializer_list<T> il);
	Vec(const Vec &s);
	Vec(Vec &&s);
	Vec &operator=(Vec &&s);
	Vec &operator=(const Vec &s);
	bool operator==(const Vec &s)//14.16  
	{
		if (size() != s.size())
			return false;
		auto it = elements, its = s.elements;
		while (it != first_free)
		{
			if (*it++ != *its++)
				return false;
		}
		return true;
	}
	bool operator!=(const Vec &s)//14.16  
	{
		return !(*this == s);
	}
	bool operator<(const Vec &s)//14.18  
	{
		if (size()>s.size())
			return false;
		else if (size() < s.size)
			return true;
		for (auto it = elements, its = s.elements; it != first_free; ++it, ++its)
		{
			if (*it == *its)
				continue;
			else if (*it > *its)
				return false;
			else
				return true;
		}
		return false;
	}
	bool operator>(const Vec &s)//14.18  
	{
		return !(*this < s) && *this != s;
	}
	bool operator<=(const Vec &s)//14.18  
	{
		return !(*this > s);
	}
	bool operator>=(const Vec &s)//14.18  
	{
		return !(*this < s);
	}
	Vec &operator=(std::initializer_list<T> il)
	{
		auto nobj = alloc_n_copy(il.begin(), il.end());
		free();
		elements = nobj.first;
		first_free = cap = nobj.second;
		return *this;
	}
	T &operator[](std::size_t n)
	{
		return elements[n];
	}
	const T &operator[](std::size_t n)const
	{
		return elements[n];
	}
	~Vec();
	void push_back(const T &s);//��T��ӵ�β��ָ��  
	size_t size()const
	{
		return first_free - elements;
	}
	size_t capacity()const
	{
		return cap - elements;
	}
	T *begin()const
	{
		return elements;
	}
	T *end()const
	{
		return first_free;
	}
	template<class TT>
	friend std::ostream &operator<<(std::ostream &os, const Vec<TT> &s);
};
template<class T>
void Vec<T>::push_back(const T &s)
{
	chk_n_alloc();//ȷ���ռ�ʣ��  
	alloc.construct(first_free++, s);//��β�󹹽�һ��s��s�Ŀ������캯�����죩������β��ָ��first_freeָ����һ��  
}
template<class T>
std::pair<T *, T *> Vec<T>::alloc_n_copy(const T *b, const T *e)
{
	auto data = alloc.allocate(e - b);//���䲢����n��T����ĵ�ַ T *  
	return{ data, std::uninitialized_copy(b, e, data) };//uninit_copy����β��ָ��T *  
														//��l~r֮���Ԫ�ؿ�����data��ʼ�ĵ�ַ��������dataβ��Ȼ��ʹ��data(begin)�ͷ���ֵ(end)����һ��pair<T *,T *>  
}
template<class T>
void Vec<T>::free()
{
	if (elements)//�����Ϊ��  
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);//�����һ��Ԫ�ؿ�ʼ��ǰ�ݻ٣�����p����������  
							   //for_each(elements, first_free, [this](T *s){alloc.destroy(s); });//13.43  
		alloc.deallocate(elements, cap - first_free);//�ͷ�elements��ʼ��n��T������ڴ�  
	}
}
template<class T>
Vec<T>::Vec(std::initializer_list<T> il)
{
	auto newdata = alloc_n_copy(il.begin(), il.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
template<class T>
Vec<T>::Vec(const Vec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());//����һ��s�ĸ��� ֵ  
	elements = newdata.first;//��ͷָ���´����ĸ�����ͷ  
	first_free = cap = newdata.second;//��β����ڴ�βָ�򸱱���β���Ժ���û����chk_n_alloc�����õ���ʣ��ռ��С��  
}
template<class T>
Vec<T>::Vec(Vec &&s) :elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	s.elements = s.first_free = s.cap = nullptr;
}
template<class T>
Vec<T> &Vec<T>::operator=(Vec &&s)
{
	if (this == &s)
		return *this;
	free();
	elements = s.elements;
	first_free = s.first_free;
	cap = s.cap;
	s.elements = s.first_free = s.cap = nullptr;
	return *this;
}
template<class T>
Vec<T>::~Vec()
{
	free();//����ǰ����alloc������ڴ�  
}
template<class T>
Vec<T> &Vec<T>::operator=(const Vec &s)
{
	if (this == &s)
		return *this;
	auto data = alloc_n_copy(s.elements, s.first_free);
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
template<class T>
void Vec<T>::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1; //��ǰ�ռ��������С  
	auto newdata = alloc.allocate(newcapacity); //���䲢����newcapacity��T�����С�Ŀռ�  
	auto dest = newdata;
	auto elem = elements;//ָ��ǰ�����ͷ  
	for (size_t i = 0; i != size(); ++i)
	{
		alloc.construct(dest++, std::move(*elem++));//move����elemָ���T��������Լ����ڴ����Ȩ�����أ�Ȼ��constructʹ��T���ƶ����캯������destָ��ĵ�ַ  
	}                                               //����dest��ָ��newdata��β��  
	free();             //�ƶ�����ͷŵ�ǰ����ָ����ڴ�  
	elements = newdata; //ָ����ͷ  
	first_free = dest;  //ָ����β��       
	cap = elements + newcapacity;   //ָ���ڴ�β  
}
template<class TT>
std::ostream &operator<<(std::ostream &os, const Vec<TT> &s)
{
	for (auto x : s)
		std::cout << x;
	return os;

#endif // !VEC_H
