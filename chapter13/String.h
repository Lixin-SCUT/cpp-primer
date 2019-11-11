#pragma once
#ifndef STRING_H
#define STRING_H
#include<iostream>
#include<memory>
#include<algorithm>
using std::allocator;
using std::cout;
using std::endl;
using std::pair;


class String {
public:
	String():elements(nullptr), first_free(nullptr), cap(nullptr) {}
	String(const char *);
	String(const String&);
	String &operator=(const String&);
	String(String &&) noexcept;
	String &operator=(String &&)noexcept;
	~String();
	void push_back(const char&);
	size_t size()const { return first_free - elements; }
	size_t capacity()const { return cap - elements; }
	char *begin() const { return elements; }
	char *end()const { return first_free; }
	void resize(size_t);
private:
	allocator<char> alloc;
	void chk_n_alloc() {
		if (size() == capacity()) reallocate();
	}
	pair<char*, char*> alloc_n_copy(const char*, const char*);
	void free();
	void reallocate();
	char *elements;
	char *first_free;
	char *cap;
};

String::String(const char * cc) {
	auto newdata = alloc_n_copy(cc,cc+strlen(cc)-2);
	elements = newdata.first;
	first_free =cap= newdata.second;
}

void String::push_back(const char& c) {
	chk_n_alloc();
	alloc.construct(first_free++, c);
}

pair<char*, char*> String::alloc_n_copy(const char* b, const char*e) {
	auto data = alloc.allocate(e - b);
	return{ data,std::uninitialized_copy(b,e,data) };
}

void String::free() {
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

String::String(const String &s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
	cout << *elements << endl;
	cout << "拷贝构造函数" << endl;
}

String::String(String &&s) noexcept: elements(s.elements),first_free(s.first_free),cap(s.cap){
	s.elements = s.first_free = s.cap = nullptr;
	cout << "移动构造函数" << endl;
}
String &String::operator=(String &&rhs)noexcept {
	if (&rhs != this) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
	}
	cout << "移动赋值函数" << endl;
	return *this;
}

String::~String() {
	free();
}

String& String::operator=(const String &rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	cout << "拷贝赋值函数" << endl;
	return *this;
}

void String::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}
void String::resize(size_t t) {
	const size_t old_n = size();
	if (t > old_n) {
		auto newdata = alloc.allocate(t);
		auto dest = newdata;
		auto elem = elements;
		for (size_t i = 0; i != size(); ++i)
			alloc.construct(dest++, std::move(*elem++));
		free();
		elements = newdata;
		first_free = dest;
		cap = elements + t;
	}
}
#endif // !STRING_H
