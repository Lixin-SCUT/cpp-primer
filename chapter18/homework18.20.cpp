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
	void compute() { cout << 1 << endl; };//������  
void compute(const void *) { cout << 2 << endl; };//����,0->NULL  
}
using p::compute;
//void compute(int) { cout << 3 << endl; };//����,���ƥ��  
void compute(double, double = 1.1) { cout << 4 << endl; };//����,int->double  
void compute(char*, char* = 0) { cout << 5 << endl; };//����,0->NULL  

void f()
{
	compute(0);//��compute(int)�汾���ƥ��  
}
int main() {
	f();
}

//namespace p
//{
//	void compute();//������  
//	void compute(const void *);//����,0->NULL  
//}
//using p::compute;
//void compute(int);//����,���ƥ��  
//void compute(double, double = 1.1);//����,int->double  
//void compute(char*, char* = 0);//����,0->NULL  
//
//void f()
//{
//	compute(0);//��compute(int)�汾���ƥ��  
//}
//
//
//namespace p {
//	void compute();//�����У��ɼ�  
//	void compute(const void *);//����,0->NULL���ɼ�  
//}
//void compute(int);//����,���ɼ���������
//void compute(double, double = 1.1);//����,int->double,������ 
//void compute(char*, char* = 0);//����,0->NULL��������
//void f() {
//	using p::compute;
//	compute(0);
//}














