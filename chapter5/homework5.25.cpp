#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int i, j;
	while(cin >> i >> j)
	try {
		if (j == 0)
			throw runtime_error("j cannot be zero");
		cout << "result is " << i / j << endl;
	}
	catch (runtime_error error) {
		cout << error.what() << endl;
		cout << "whether you want to continue?[y/n]";
		string s;
		cin >> s;
		if (s[0] == 'y')
			continue;
		else
			break;
	}	
};


