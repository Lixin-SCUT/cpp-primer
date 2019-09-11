#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	int ff = 0, fl = 0, fi = 0;
	while (cin >> s) {
		for (int i = 0; i < s.size() - 1; ++i) {
			auto letter = s[i];
			switch (letter)
			{
			case 'f': {
				switch (s[i + 1])
				{
				case 'f': {++ff; break; }
				case 'l': {++fl; break; }
				case 'i': {++fi; break; }
				default:
					break;
				}
			}
			default:break;
			}
		}
	}
	cout << "ff is " << ff << endl;
	cout << "fl is " << fl << endl;
	cout << "fi is " << fi << endl;
};


