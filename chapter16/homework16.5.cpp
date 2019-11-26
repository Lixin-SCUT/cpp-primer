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

template<typename T, unsigned N> void print(T(&arr)[N]) {
	for (auto elem : arr)
		cout << elem << endl;
}
int main() {
	int arri[5]{ 1,2,3,4,5 };
	char arrc[6] = "12345";
	cout << strlen(arrc) << endl;
	print(arri);
}














