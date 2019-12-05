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

namespace p
{
	void compute() { cout << 1 << endl; };//不可行  
void compute(const void *) { cout << 2 << endl; };//可行,0->NULL  
}
using p::compute;
//void compute(int) { cout << 3 << endl; };//可行,最佳匹配  
void compute(double, double = 1.1) { cout << 4 << endl; };//可行,int->double  
void compute(char*, char* = 0) { cout << 5 << endl; };//可行,0->NULL  

void f()
{
	compute(0);//与compute(int)版本最佳匹配  
}
int main() {
	f();
}

//namespace p
//{
//	void compute();//不可行  
//	void compute(const void *);//可行,0->NULL  
//}
//using p::compute;
//void compute(int);//可行,最佳匹配  
//void compute(double, double = 1.1);//可行,int->double  
//void compute(char*, char* = 0);//可行,0->NULL  
//
//void f()
//{
//	compute(0);//与compute(int)版本最佳匹配  
//}
//
//
//namespace p {
//	void compute();//不可行，可见  
//	void compute(const void *);//可行,0->NULL，可见  
//}
//void compute(int);//可行,不可见，被隐藏
//void compute(double, double = 1.1);//可行,int->double,被隐藏 
//void compute(char*, char* = 0);//可行,0->NULL，被隐藏
//void f() {
//	using p::compute;
//	compute(0);
//}














