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

int main()
{
	vector<int> vi{1, 2, 3, 4, 5};
	auto i = vi.rbegin();
	auto j = i.base();
	vi.erase(--i.base());
	for (auto c : vi)
		cout << c;
}

class StrBlob {
public:
	typedef vector<string>::size_type size_type;
	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string> i1):data(make_shared<vector<string>>(i1)) {};
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back() {
		check(0, "pop_backon empty StrBlob");
		data->pop_back();
	};;
	string& front() {
		check(0, "front on empty StrBlob");
		return data->front();
	};
	string& back() {
		check(0, "back on empty StrBlob");
		return data->back();
	};
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg)const {
		if (i >= data->size())
			throw out_of_range(msg);
	};
};


















