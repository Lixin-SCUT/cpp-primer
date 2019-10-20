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



int main()
{
	string s;
	cin >> s;
	char *c = new char[s.size()+1];
	strcpy(c, s.c_str());//¸´ÖÆ
	delete[]c;
}





















