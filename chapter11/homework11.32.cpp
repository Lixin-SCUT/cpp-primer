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
using namespace std;
string numberToWords(int num);

int main()
{
	multimap<string, string> multim{ {"123","1"} ,{ "123","2" } ,{ "456","1" } ,{ "123","1" } };
	string name="123", product;
	for (auto left = multim.begin(); left != multim.end();) {
		auto right = multim.upper_bound((*left).first);
		cout << (*left).first << " ";
		while (left != right) {
			cout << (*left).second << " ";
			++left;
		}
		cout << endl;
	}
}


















