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

template<typename T> void print(T &cot) {
	for (typename T::size_type i = 0; i < cot.size(); ++i)
		cout << cot[i] << endl;
	return;
}
int main() {
	vector<int> vi{ 1,2,3,4,5 };
	print(vi);
}














