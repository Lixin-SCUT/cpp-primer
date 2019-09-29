#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool check_size(int i, int len);


int main()
{
	vector<int> vlen{ 0,1,2,3,4,5,6,7,8,9 };
	string s{"1234567"};
	int len = s.size();
	cout << *find_if(vlen.begin(), vlen.end(), bind(check_size, _1, len))<<endl;

}

bool check_size(int i, int len) {
	return i> len;
}















