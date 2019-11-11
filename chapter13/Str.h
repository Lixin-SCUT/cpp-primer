#pragma once
#ifndef STR_H
#define STR_H
#include <iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;


class StrBlob {
	friend class StrBlobPtr;
public:
	typedef vector<string>::size_type size_type;
	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string> i1) :data(make_shared<vector<string>>(i1)) {};
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t)& { data->push_back(t); }
	void push_back(string &&t)&& { data->push_back(t); }
	void pop_back() {
		check(0, "pop_back on empty StrBlob");
		data->pop_back();
	};;
	string& front() {
		check(0, "front on empty StrBlob");
		return data->front();
	};
	string& back() {
		check(0, "back on empty StrBlob");
		return data->back();
	};
	StrBlobPtr begin();
	StrBlobPtr end();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg)const {
		if (i >= data->size())
			throw out_of_range(msg);
	};
};

class StrBlobPtr {
public:
	StrBlobPtr() :curr(0) {}
	StrBlobPtr(StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {}
	string& deref() const;
	StrBlobPtr& incr();
private:
	shared_ptr<vector<string>> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { auto ret = StrBlobPtr(*this, data->size()); return ret; }

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("8xing");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}

string& StrBlobPtr::deref() const {
	auto p = check(curr, "8xing");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
	check(curr, "8xing");
	++curr;
	return *this;
}
#endif // !STR_H
