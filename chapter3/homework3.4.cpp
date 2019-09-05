#include <iostream>
#include<string>
using namespace std;

int main() {
	string s1,s2;
	cout << "please input the first one:";
	getline(cin, s1);
	cout << "please input anothor one:";
	getline(cin, s2);
	if (s1 == s2)
		cout << "they are equal." << endl;
	else if (s1.size() == s2.size())
		cout << "they have same length." << endl;
	else if (s1.size() > s2.size())
		cout << s1 << endl;
	else
		cout << s2 << endl;
};
