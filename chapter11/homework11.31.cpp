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
	multimap<string, string> multim{ {"123","456"} ,{ "123","456" } ,{ "123","456" } ,{ "123","456" } };
	string name="123", product;
	if (multim.find(name) != multim.end())
		multim.erase(name);
	cout << multim.empty();
}


















