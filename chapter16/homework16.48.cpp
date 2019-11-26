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

template <typename T> string debug_rep(T *p) {
	ostringstream ret;
	ret << "pointer:" << p;
	if (p)
		ret << " " << debug_rep(*p);
	else
		ret << "null pointer";
	return ret.str();		 
}

template <typename T> string debug(const T &t) {
	ostringstream ret;
	ret << t;
	return ret.str();
}

int main() {

}














