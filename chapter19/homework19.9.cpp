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
	int arr[10];
	D1 d;
	Base *p = &d;
	cout << typeid(42).name() << endl;
	cout << typeid(arr).name() << endl;
	cout << typeid(string).name() << endl;
	cout << typeid(p).name() << endl;
	cout << typeid(*p).name() << endl;
}