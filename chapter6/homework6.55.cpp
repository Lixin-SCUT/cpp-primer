#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
int func(int, int);
int add(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int main() {
	vector<int(*)(int, int)> v{add,minus,multi,divide};
};
int func(int, int) {
	return 1;
}
int add(int a, int b) {
	return a+b;
}
int minus(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}



