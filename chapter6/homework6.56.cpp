#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
int func(int, int);
int add(int a, int b);
int minuss(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int main() {
	vector<int(*)(int, int)> v{add,minuss,multi,divide};
	cout << v[0](10, 2) << endl;
	cout << v[1](10, 2) << endl;
	cout << v[2](10, 2) << endl;
	cout << v[3](10, 2) << endl;
};
int func(int, int) {
	return 1;
}
int add(int a, int b) {
	return a+b;
}
int minuss(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}



