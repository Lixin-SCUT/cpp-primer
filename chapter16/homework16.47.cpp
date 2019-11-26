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
using namespace std;


template<typename F,typename T1,typename T2>
void flip(F f, T1 &&t1, T2 &&t2) {
	f(forward<T2>(t2), forward<T1>(t1));
}

void f(int& a, int &&b)
{
	cout << a << " " << ++b << endl;
}

int main() {
	int i = 10;
	//fun(i);
	vector<int &&> vi;
}














