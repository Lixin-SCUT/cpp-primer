#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;
istream &RaP(istream &is);


int main() {
	string file = "test.txt";
	ifstream in(file);
	string s;
	vector<string> vs;
	while (in >> s)
		vs.push_back(s);
	for (auto i : vs) {
		istringstream is(i);
		string output;
		is >> output;
		cout << output;
	}
}





