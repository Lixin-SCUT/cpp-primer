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
	std::allocator<T> alloc;//为所有Vec对象分配内存用  
	void chk_n_alloc()      //如果剩余空间为0就分配新空间  
	{
		if (size() == capacity())
			reallocate();
	}
	std::pair<T *, T *> alloc_n_copy(const T *b, const T *e);//创建一个内容为b到e之间的元素的对象，并返回这个对象的一对头尾指针  
	void free();//释放所有alloc分配的所有内存  
	void reallocate();//移动当前对象的元素到2倍对象大小的新对象里  
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
	void push_back(const T &s);//把T添加到尾后指针  
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
	chk_n_alloc();//确保空间剩余  
	alloc.construct(first_free++, s);//在尾后构建一个s（s的拷贝构造函数构造），并把尾后指针first_free指向下一个  
}
template<class T>
std::pair<T *, T *> Vec<T>::alloc_n_copy(const T *b, const T *e)
{
	auto data = alloc.allocate(e - b);//分配并返回n个T对象的地址 T *  
	return{ data, std::uninitialized_copy(b, e, data) };//uninit_copy返回尾后指针T *  
														//把l~r之间的元素拷贝到data开始的地址，并返回data尾后，然后使用data(begin)和返回值(end)构建一个pair<T *,T *>  
}
template<class T>
void Vec<T>::free()
{
	if (elements)//如果不为空  
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);//从最后一个元素开始向前摧毁，调用p的析构函数  
							   //for_each(elements, first_free, [this](T *s){alloc.destroy(s); });//13.43  
		alloc.deallocate(elements, cap - first_free);//释放elements开始的n的T对象的内存  
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
	auto newdata = alloc_n_copy(s.begin(), s.end());//创建一个s的副本 值  
	elements = newdata.first;//把头指向新创建的副本的头  
	first_free = cap = newdata.second;//把尾后和内存尾指向副本的尾（以后调用会调用chk_n_alloc，不用担心剩余空间大小）  
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
	free();//清理当前对象alloc分配的内存  
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
	auto newcapacity = size() ? 2 * size() : 1; //当前空间的两倍大小  
	auto newdata = alloc.allocate(newcapacity); //分配并返回newcapacity个T对象大小的空间  
	auto dest = newdata;
	auto elem = elements;//指向当前对象的头  
	for (size_t i = 0; i != size(); ++i)
	{
		alloc.construct(dest++, std::move(*elem++));//move会让elem指向的T对象放弃自己的内存管理权并返回，然后construct使用T的移动构造函数构建dest指向的地址  
	}                                               //接受dest会指向newdata的尾后  
	free();             //移动完后释放当前对象指向的内存  
	elements = newdata; //指向新头  
	first_free = dest;  //指向新尾后       
	cap = elements + newcapacity;   //指向内存尾  
}
template<class TT>
std::ostream &operator<<(std::ostream &os, const Vec<TT> &s)
{
	for (auto x : s)
		std::cout << x;
	return os;

#endif // !VEC_H
