#include <iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
fstream &RaP(fstream &is);

int main() {
	string f = "test.txt";
	fstream fstrm(f);
	&RaP(fstrm);
}

fstream &RaP(fstream &is) {
	vector<string> vs;
	string s;
	while (getline(is,s)) {
		cout << s << endl;
		vs.push_back(s);
	}
	return is;
}





