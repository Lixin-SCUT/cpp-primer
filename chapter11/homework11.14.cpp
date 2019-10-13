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

int main()
{
	map<string, vector<pair<string,int>>>map_name;
	string first_name, last_name;
	int birth;
	while (cin) {
		cin >> first_name >> last_name>>birth;
		if (map_name.find(first_name) == map_name.end()) {
			map_name.insert({ first_name,{ {last_name,birth} } });
		}
		else
			map_name[first_name].push_back({ last_name,birth });
	}
}


















