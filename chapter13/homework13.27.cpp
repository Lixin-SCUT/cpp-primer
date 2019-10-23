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

class HasPtr {
public:
	HasPtr(const string &s=string()):ps(new string(s)),i(0),use(new size_t(1)){}
	HasPtr(const HasPtr &p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	string *ps;
	int i;
	size_t *use;
};

HasPtr::~HasPtr() {
	if (--*use == 0) {
		delete ps;
		delete use;
	}
}

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
	++*rhs.use;   //�����Ҳ����
	if (--*use == 0) {   //�ݼ���������˼���˴���α�֤���Ҹ��Ƶ���ȷ��
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}
int main()
{

}















