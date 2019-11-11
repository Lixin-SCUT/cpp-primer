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

class HasPtr
{
	friend void swap(HasPtr &lhs, HasPtr &rhs);
public:
	HasPtr(const HasPtr &hs) : ps(new string(*hs.ps)), i(hs.i) {};
	~HasPtr() { delete ps; }
	HasPtr(const string &s = string(), int si = 0) :ps(new string(s)), i(si) {}
	HasPtr &operator=(const HasPtr &hp) {
		string *s = new string(*hp.ps);
		delete ps;
		*ps = *s;
		delete s;
		i = hp.i;
		return *this;
	}
	bool operator<(const HasPtr &rhs) const{ return i < rhs.i; };
private:
	string *ps;
	int i;
};

void swap(HasPtr &lhs, HasPtr &rhs) {
	std::swap(lhs.ps, rhs.ps);
	std::swap(lhs.i, rhs.i);
	cout << "now we swap!" << endl;
}


int main()
{
	vector<HasPtr> hp;
	for (int i = 5; i > 0; --i)
		hp.push_back(HasPtr("123", i));
//	for (auto h : hp)
//		cout << h.i << endl;
//	sort(hp.begin(), hp.end());
	swap(hp[0], hp[1]);
}












