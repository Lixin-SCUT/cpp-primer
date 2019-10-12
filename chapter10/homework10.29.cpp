#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
using namespace std;

int main()
{
	string file_name = "test.txt";
	fstream fstrm(file_name);
	istream_iterator<string> in(fstrm), eof;
	vector<string> vs(in, eof);
	for (auto s : vs)
		cout << s << endl;
}

















