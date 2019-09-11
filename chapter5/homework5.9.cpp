#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	while (cin >> s) {
		int num = 0;
		for (auto letter : s)
			switch (letter)
			{
			case 'a': {++num; break; }
			case 'i': {++num; break; }
			case 'o': {++num; break; }
			case 'u': {++num; break; }
			case 'e': {++num; break; }
			default:break;
			}
		cout << "num is" << num<<endl;
	}
};


