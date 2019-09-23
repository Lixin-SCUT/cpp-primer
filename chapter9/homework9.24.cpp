#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;

int main() {
	vector<int> iv;
	//int i1 = iv.at(0);//通过编译，但是运行会报错，显示abort被调用
	//int i2 = iv[0];//运行会报错，显示out of range
	//int i3 = iv.front();//显示 iterator cannot dereferenable
	int i4 = *iv.begin();
}








