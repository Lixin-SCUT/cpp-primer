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

class StrBlob {
	friend class StrBlobPtr;
public:

	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string> i1) :data(make_shared<vector<string>>(i1)) {};
	StrBlob(const StrBlob &sb):data(make_shared<vector<string>>(*sb.data)) {};
	StrBlob& operator=(const StrBlob &sb) {
		data = make_shared<vector<string>>(*sb.data);
	}
private:
	shared_ptr<vector<string>> data;
};

int main()
{

}















