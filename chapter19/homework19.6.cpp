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
	Base b,*pb=&b;
	D1 d,*pd=&d;
	auto pd2 = dynamic_cast<D1*>(pb);
	if (typeid(*pd2) == typeid(*pd))
		cout << "finished" << endl;
	else
		cout << "wrong" << endl;
}