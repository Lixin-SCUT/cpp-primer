#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sadd(string &s, string front_s, string back_s);

int main() {
	string s = { "pscjdoposjcpijsapicjdipsc" };
	string sp{ "dfpg" };
	int i = 0,temp=0, len = 0,x=0,y=0;
	while (i<s.size()) {
		i = s.find_first_of(sp, i);
		if (i==-1) {
			break;
		}
		if (len <(i - temp)) {
			len = (i - temp);
			x = temp;
			y = i;
		}
		
		temp = ++i;
	}
	if(x||y)
		while(x!=y)
		cout << s[x++] << endl;
}










