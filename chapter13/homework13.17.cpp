#pragma  warning (disable:4996) 
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

class numbered {
public:
	numbered(int i):mysn(i){}
	numbered(const numbered &n) :mysn(n.mysn) { ++mysn;}
	int mysn;
};

void f(numbered &s) { cout << s.mysn << endl; }
//void f(numbered s) { cout << s.mysn << endl; }
int main()
{
	numbered a(10);
	numbered b = a, c = b;
	f(a), f(b), f(c);
}















