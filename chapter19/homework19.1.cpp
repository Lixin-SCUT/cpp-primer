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
#include<iomanip>
#include<cstdlib>


using namespace std;

struct Base { int i = 0; };
struct D1 :public Base { int i1 = 0; };
struct D2 : public Base { int i2 = 0; };
struct MI :public D1, public D2 { int i3 = 0; };
int main() {
	MI mi1, *mi = &mi1;
	Base *b = mi;
}
















