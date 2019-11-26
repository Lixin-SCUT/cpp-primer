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

template <typename T>
int countv(vector<T> &vt,T t) {
	int count=0;
	for (auto i : vt)
		if (i == t)
			++count;
	return count;
}
int main() {
	vector<string> vs{ "123","456","789","123" };
	vector<int> vi{ 1,2,3,4,5,1,2,3,1,2 };
	vector<double> vd{ 1.0,2.0,3.0,1.0 };
	cout << countv(vs, string("123")) << endl;
	cout << countv(vi, 1) << endl;
	cout << countv(vd, 1.0) << endl;

}














