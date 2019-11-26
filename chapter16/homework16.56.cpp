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
ostream &print(ostream &os, const T &t) {
	return os << t;
}
template<typename T,typename...Args>
ostream& print(ostream &os,T &t, Args&...rest) {
	os << t<<",";
	return print(os, rest...);
}
template<typename...Args>
ostream &errorMsg(ostream &os, const Args&...rest) {
	return print(os, debug_rep(rest)...);
}

int main() {


}














