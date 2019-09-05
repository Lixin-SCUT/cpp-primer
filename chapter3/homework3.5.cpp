#include <iostream>
#include<string>
using namespace std;

int main() {
	string s,temp;
	cin >> s;
	while (cin >> temp) {
		//s = s + temp;
		s = s + " " + temp;
		cout << s <<endl;
	}
};
