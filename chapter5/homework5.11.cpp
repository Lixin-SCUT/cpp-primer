#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	char s;
	int num = 0;
	int space = 0, tab = 0, enter = 0;
	while (cin>>noskipws>>s) {	
			switch (s)
			{
			case'A': case 'a': {++num; break; }
			case'I': case 'i': {++num; break; }
			case'O': case 'o': {++num; break; }
			case'U': case 'u': {++num; break; }
			case'E': case 'e': {++num; break; }
			case' ': {++space; break; }
			case'\t': {++tab; break; }
			case'\n': {++enter; break; }
			default:break;
			}
	}
	cout << "num is " << num << endl;
	cout << "space is " << space << endl;
	cout << "tab is " << tab << endl;
	cout << "enter is " << enter << endl;
};


