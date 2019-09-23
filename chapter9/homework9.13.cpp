#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<array>
using namespace std;



int main() {
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	list<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
	int i;
	cin >> i;
	vector<double> v2(v.begin(),v.end());
	vector<double> v3(v1.begin(), v1.end());
}








