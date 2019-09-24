#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sadd(string &s, string front_s, string back_s);

int main() {
	string s = { "thosadkjahsjkdasdkjasthru" };
	sadd(s, "Mr.", "III");
	cout << s << endl;
}

void sadd(string &s, string front_s, string back_s) {
	s.insert(s.begin(), front_s.begin(),front_s.end());
	s.append(back_s);
}








