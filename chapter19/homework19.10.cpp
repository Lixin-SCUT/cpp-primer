#pragma warning(disable:4996)
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
#include<utility>
#include<iomanip>
#include<cstdlib>


using namespace std;

class Base { virtual void func() {}; };
class D1:public Base{ virtual void func() {}; };
class D2 :public D1 { virtual void func() {}; };
class D3 :public D1, public Base { virtual void func() {}; };
int main() {
	Base *b1 = new D2;
	D2 d1;
	Base &b2 = d1;
	D1 *d2 = new D1;
	Base& b3 = *d2;
	cout << typeid(b1).name() << endl;
	cout << typeid(&b2).name() << endl;
	cout << typeid(b3).name() << endl;
}