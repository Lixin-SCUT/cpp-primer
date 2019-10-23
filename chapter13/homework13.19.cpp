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



class Employee {
public:
	Employee() { num = ++s_num; };
	Employee(string n) :name(n),num(++s_num) {}
	Employee(const Employee &) = delete;
	Employee& operator=(const Employee &) = delete;
	string name;
	int num;
	static int s_num;
};

int Employee::s_num = 0;


int main()
{

}















