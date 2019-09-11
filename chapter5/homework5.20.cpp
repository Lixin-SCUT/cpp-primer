#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s, s_b;
	int flag=0;
	cin >> s;
	s_b = s;
	do {
		cin >> s;
		if (s_b == s) {
			++flag; 
			break;
		}
		s_b = s;
	}
	while (cin);
	if (!flag)
		cout << "no same word" << endl;
	else
		cout << s_b << " is the same word"<<endl;
};


