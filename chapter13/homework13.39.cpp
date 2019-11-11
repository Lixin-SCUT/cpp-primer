#pragma  warning (disable:4996) 
#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
#include<map>
#include<set>
#include<unordered_map>
#include<sstream>
#include<memory>
using namespace std;

class StrVec {
public:
	StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
	StrVec(const StrVec&);
	StrVec &operator=(const StrVec&);
	~StrVec();
	void push_back(const string&);
	size_t size()const { return first_free - elements; }
	size_t capacity()const { return cap - elements; }
	string *begin() const { return elements; }
	string *end()const { return first_free; }
	void reverse(string *, string *);
	string *resize(size_t);
private:
	static allocator<string>alloc;
	void chk_n_alloc()
	{
		if (size() == capacity()) reallocate;
	}
	pair<string*, string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	string *elements;
	string *first_free;
	string *cap;
};

void StrVec::push_back(const string &s) {
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

pair<string*, string*> StrVec::alloc_n_copy(const string *b, const string *e) {
	auto data = alloc.allocate(e - b);
	return{ data,uninitialized_copy(b,e,data) };
}

void StrVec::free() {
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec &s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
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

string* StrVec::resize(size_t t) {
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

int main()
{
	int i;
	if (i = 1)
		cout << i << endl;
}












