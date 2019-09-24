#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sadd(string &s, string front_s, string back_s);

int main() {
	string s = { "ab2c3d7R4E6" };
	int i = 0;
	while (i < s.size()) {
		i = s.find_first_of("0123456789", i);
		if (i == -1) 
			break;
		cout << s[i++] << endl;
	}
	i = 0;
	while (i < s.size()) {
		i = s.find_first_not_of("0123456789", i);
		if (i == -1)
			break;
		cout << s[i++] << endl;
	}

}










