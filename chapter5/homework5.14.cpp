#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	string s_b;
	int num=0;
	int lab=0;
	cin >> s;
	s_b = s;
	while (cin >> s) {
		if (s_b == s)
			++num, ++lab;
		else if (num)
			cout << s_b << " occur " << num+1 << " time " << endl, s_b = s, num = 0;
		else
			s_b = s, num = 0;
	}
	if (!lab)
		cout << "no same words occur" << endl;
};


