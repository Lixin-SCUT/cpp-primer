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
	multimap<string, vector<string>> map_name;
	string first_name, last_name;
	while (cin) {
		cin >> first_name >> last_name;	
		map_name.insert({ first_name,{ last_name } });
	}
}


















