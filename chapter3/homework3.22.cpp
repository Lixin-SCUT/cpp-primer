#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string text{ "AbdGGasjd" };
	for (auto &i = text.begin(); i != text.end(); ++i)
	{
		*i = toupper(*i);
		cout << *i;
	}
};
