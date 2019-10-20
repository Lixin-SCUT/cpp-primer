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
	char *c1{ "123" };
	char *c2{ "456" };
	char *c = new char[strlen(c1) + strlen(c2) + 1];
	strcpy(c, c1);//∏¥÷∆
	strcat(c, c2);//Ω”…œ
	delete[]c;
}





















