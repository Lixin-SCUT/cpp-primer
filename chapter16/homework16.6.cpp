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
#include "Sales_data.h"
using namespace std;

template<typename T, unsigned N> T* begin(const T(&arr)[N])
{// error C2234: “arr”: 引用数组是非法的,(&arr即可)
	return arr;
}

template<typename T, unsigned N> T* end(const T(&arr)[N])
{
	return arr + N;
}


int main() {
	int arri[5]{ 1,2,3,4,5 };
	char arrc[6] = "12345";
	cout << *begin(arrc) <<" "<<*(end(arrc)-2)<< endl;

}














