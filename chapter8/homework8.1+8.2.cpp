#include <iostream>
#include<vector>
#include<string>

using namespace std;
istream &RaP(istream &is);

int main() {
	RaP(cin);
}

istream &RaP(istream &is) {
	string s;
	while (is>>s) {
		cout << s << endl;
	}
	is.clear();
	return is;
}





