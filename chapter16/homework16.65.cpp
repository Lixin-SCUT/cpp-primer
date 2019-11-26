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

template <typename T> string debug_rep(T *p);
//{
//	//ostringstream ret;
//	//ret << "pointer:" << p;
//	//if (p)
//	//	ret << " " << debug_rep(*p);
//	//else
//	//	ret << "null pointer";
//	//return ret.str();
//}

template<> string debug_rep(const char *p) {
	ostringstream ret;
	ret << "const char *p"<<" ";
	ret << "pointer:" << p;
	if (p)
		ret << " " << *p;
	else
		ret << "null pointer";
	return ret.str();
}

template<> string debug_rep(char *p) {
	ostringstream ret;
	ret << "char *p" << " ";
	ret << "pointer:" << p;
	if (p)
		ret << " " << *p;
	else
		ret << "null pointer";
	return ret.str();
}
int main() {
	auto c = "123";
	cout<<debug_rep(c)<<endl;
	char *cc = "123";
	cout << debug_rep(cc) << endl;
}














