#include <iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;
istream &RaP(istream &is);


int main() {
	RaP(cin);
}

istream &RaP(istream &is) {
	string s;
	getline(cin, s);
	istringstream ist(s);
	string output;
	while (ist >> output)
		cout << output<<endl;
	return is;
}




