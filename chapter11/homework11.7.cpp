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
	map<string, vector<string>> map_name;
	string first_name, last_name;
	while (cin) {
		cin >> first_name >> last_name;
		if (map_name.find(first_name) == map_name.end()) {
			map_name.insert({ first_name,{last_name} });
		}
		else
			map_name[first_name].push_back(last_name);
	}	
}


















