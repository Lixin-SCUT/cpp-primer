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
public:
	HasPtr(const HasPtr &hs) : ps(new string(*hs.ps)), i(hs.i) {};
	~HasPtr() { delete ps; }
	HasPtr &operator=(const HasPtr &hp){ 
		string *s = new string(*hp.ps);
		delete ps;
		*ps = *s;
		delete s;
		i = hp.i;
		return *this;
	}
private:
	string *ps;
	int i;
};

struct X {
public:
	X(int i):val(i){ cout << "fisrt" << endl; }
	X(const X& xi) :val(xi.val) { cout << "second" << endl; }
	X &operator=(const X& xi) { val = xi.val; cout << "third" << endl;};
	~X()
	{
		cout<< val << " yao mo de le!" << endl;
	}
	int val;
};

void print_cp(X x) {
	cout << x.val << endl;
}

void print_ref(X& x) {
	cout << x.val << endl;
}

void test() {
	X x(10);
	cout << "------------------------" << endl;
	print_cp(x);
	cout << "------------------------" << endl;
	print_ref(x);
	cout << "------------------------" << endl;
	X *xp = new X(5);
	cout << "------------------------" << endl;
	delete xp;
	cout << "------------------------" << endl;
	vector<X> xv1(1,x);
	cout << "------------------------" << endl;
	vector<X> xv2{ x };
	cout << "------------------------" << endl;
}

int main()
{
	test();
}















