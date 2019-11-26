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

template<typename T,typename... Args>
void foo(const T &t, const Args&...rest) {
	cout<<sizeof...(Args)<<endl;
	cout << sizeof...(rest) << endl;
}
int main() {

	foo(123, "123", 123, 123);
	foo("123", 123, "12");
	foo(123,"123");
	foo("12");
}














