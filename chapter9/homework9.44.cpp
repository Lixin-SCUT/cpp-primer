#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sreplace(string s, string oldVal, string newVal);

int main() {
	string s = { "thosadkjahsjkdasdkjasthru" };
	sreplace(s, "tho", "though");
	sreplace(s, "thru", "through");
}

void sreplace(string s, string oldVal, string newVal) {
	int i = s.find(oldVal);
	s.replace(i, oldVal.size(), newVal);
	cout << s << endl;
}








