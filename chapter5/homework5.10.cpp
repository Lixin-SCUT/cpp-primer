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
			case'A': case 'a': {++num; break; }
			case'I': case 'i': {++num; break; }
			case'O': case 'o': {++num; break; }
			case'U': case 'u': {++num; break; }
			case'E': case 'e': {++num; break; }
			default:break;
			}
		cout << "num is " << num<<endl;
	}
};


