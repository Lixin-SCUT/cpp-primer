#pragma once
#ifndef STRVEC_H
#define STRVEC_H
#include<iostream>
#include<string>
#include<memory>
#include<algorithm>
using std::string;
using std::cout;
using std::endl;
using std::pair;
using std::allocator;
using std::initializer_list;

class StrVec {
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(initializer_list<string>);
	StrVec(const StrVec&);
	StrVec &operator=(const StrVec&);
	StrVec(StrVec&&) noexcept;
	StrVec &operator=(StrVec &&) noexcept;
	~StrVec();
	void push_back(const string&);
	size_t size()const { return first_free - elements; }
	size_t capacity()const { return cap - elements; }
	string *begin() const { return elements; }
	string *end()const { return first_free; }
	void reverse(string *, string *);
	void resize(size_t);
	template<class...Args> void emplace_back(Args&&...);
private:
	static allocator<string>alloc;
	void chk_n_alloc()
	{
		if (size() == capacity()) reallocate();
	}
	pair<string*, string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	string *elements;
	string *first_free;
	string *cap;
};

StrVec::StrVec(initializer_list<string> ils) {
	auto newdata = alloc_n_copy(ils.begin(), ils.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

void StrVec::push_back(const string &s) {
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

pair<string*, string*> StrVec::alloc_n_copy(const string *b, const string *e) {
	auto data = alloc.allocate(e - b);
	return{ data,uninitialized_copy(b,e,data) };
}

//void StrVec::free() {
//	if (elements)
//	{
//		for (auto p = first_free; p != elements;)
//			alloc.destroy(--p);
//		alloc.deallocate(elements, cap - elements);
//	}
//}
void StrVec::free() {
	if (elements) {
		for_each(elements, first_free, [this](string *s) { alloc.destroy(s); });
		alloc.deallocate(elements, cap - elements);
	}
}


StrVec::StrVec(const StrVec &s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::StrVec(StrVec &&s) noexcept
	:elements(s.elements),first_free(s.first_free),cap(s.cap){
	s.elements = s.first_free = s.cap = nullptr;
}
StrVec &StrVec::operator=(StrVec &&rhs)noexcept {
	if (&rhs != this) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}
StrVec::~StrVec() {
	free();
}
StrVec& StrVec::operator=(const StrVec &rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void StrVec::reverse(string *b, string *e) {
	reverse(b, e);
}
void StrVec::resize(size_t t) {
	const size_t old_n = size();
	if (t > old_n) {
		auto newdata = alloc.allocate(t);
		auto dest = newdata;
		auto elem = elements;
		for (size_t i = 0; i != size(); ++i)
			alloc.construct(dest++, move(*elem++));
		free();
		elements = newdata;
		first_free = dest;
		cap = elements + t;
	}

}

int check(int *(&head), int *p, int i) {
	if (i < 5) {
		check(head, p, ++i);
		cout << i << " " << *head << endl;
	}
	else {
		head = p;
		cout << i << " " << *head << endl;
	}
	return *head;
}

template<class...Args>
inline void StrVec::emplace_back(Args&&... args) {
	chk_n_alloc();
	alloc.construct(first_free++, std::forward<Args>args...);
}
#endif // !STRVEC_H

