#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);
int main() {
	//f(2.56, 42);//有多个重载函数示例与实参列表匹配
	f(42);
	f(42, 0);
	f(2.56, 3.14);
};
void f(){
	cout << "f()" << endl;
}
void f(int){
	cout << "f(int)" << endl;
}
void f(int, int){
	cout << "f(int, int)" << endl;
}
void f(double, double ){
	cout << "f(double,double = 3.14)" << endl;

}



