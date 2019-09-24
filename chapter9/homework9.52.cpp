#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
#include<queue>
#include<stack>
using namespace std;
string cal(string s);
static string num{ "1234567890" };

int main() {
	string equ{ "1+3+5-4" };
	int sum;
	stack<string> s;
	string equ_l;
	int i = 0,j=0;
	while (i < equ.size()) {
		i = equ.find_first_not_of(num, i);
		if (i == -1) {
			s.push(equ.substr(j, equ.size()-j));
			break;
		}
		s.push(equ.substr(j, i - j));
		if (equ.substr(i, 1) == ")") {
			string equ_l;
			while (s.top() != "(")
				equ_l += s.top(), s.pop();
			s.pop();
			s.push(cal(equ_l));
		}
		else
		s.push(equ.substr(i,1));
		j = ++i;
	}
	string equ_all;
	while (!s.empty()) {
		equ_all+=s.top();
		s.pop();
	}
	cout << stoi(cal(equ_all)) << endl;
		

}

string cal(string s) {
	int i = 0, j = 0;
	int a = 0, b = 0;
	char sym;
	i = s.find_first_not_of(num, i);
	a = stoi(s.substr(j, i - j));
	while (i < s.size()) {	
		sym = s[i];
		j = ++i;
		i = s.find_first_not_of(num, i);
		b = stoi(s.substr(j, i - j));
		switch (sym) {
		case '+':
			a += b;
			break;
		case'-':
			a -= b;
			break;
		}
		return to_string(a);
	}
	

}











