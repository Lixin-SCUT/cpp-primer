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

template<typename T> unsigned length(T(&arr)) {
	unsigned len = 0;
	for (auto i : arr)
		++len;
	return len;
}

template<typename T,unsigned N> unsigned lengthN(T(&arr)[N]) {
	return N;
}
int main() {
	int arri[5]{ 1,2,3,4,5 };
	char arrc[6] = "12345";
	cout << length(arrc)<< endl;
	cout << lengthN(arrc) << endl;
}














