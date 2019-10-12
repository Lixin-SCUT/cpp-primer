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

void divid(string input, string output_1, string output_2);

int main()
{
	divid("input.txt", "output1`.txt", "output2.txt");
	
}

void divid(string input, string output_1, string output_2) {
	ifstream ifstr(input);
	ofstream ofstr1(output_1), ofstr2(output_2);
	istream_iterator<int> is(ifstr),eof;
	vector<int> vi(is, eof);
	ostream_iterator<int> os1(ofstr1," "), os2(ofstr2,"\n");
	for (auto i : vi) {
		if (i % 2)
			os1 = i;
		else
			os2 = i;
		cout << i << endl;
	}
}
















