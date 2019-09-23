#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<array>
using namespace std;



int main() {
	list<char*> c{ "abcd" };
	vector<string> vs;
	vs.assign(c.begin(),c.end());
	cout << *vs.begin() << endl;
}








