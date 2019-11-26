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

using namespace std;

int main() {


}


template <typename T> int compare(const T &v1, const T &v2) {
	if (less<T>()(v1, v2)) return -1;
	if (less<T>()(v2, v1))return 1;
	return 0;
}











