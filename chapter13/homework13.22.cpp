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

class HasPtr
{
public:
	HasPtr(const HasPtr &hs) : ps(new string(*hs.ps)), i(hs.i) {};
	~HasPtr() { delete ps; }
	HasPtr(const string &s=string()):ps(new string(s)),i(0){}
	HasPtr &operator=(const HasPtr &hp) {
		string *s = new string(*hp.ps);
		delete ps;
		*ps = *s;
		delete s;
		i = hp.i;
		return *this;
	}
private:
	string *ps;
	int i;
};

int main()
{

}















