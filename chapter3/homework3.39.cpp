#include <iostream>
#include<string>
using namespace std;

int main() {
	char a[6] = "hallo";
	char b[6] = "abcde";
	if (!strcmp(a,b))
		cout << "they are equal!" << endl;
	else
		cout << "they are difference!" << endl;

	string i = { "hello" };
	string j = { "hallo" };
	if (i == j)
		cout << "they are equal!" << endl;
	else
		cout << "they are difference!" << endl;
};


