#include <iostream>
#include<vector>
#include<string>
using namespace std;
int formal_param(int f);

int main() {
	int i = 10;
	while(i)
		formal_param(i),--i;
};

int formal_param(int f) {
	int i=0;
	static int s_i=0;
	cout << f<<' '<<++i << ' ' << ++s_i<<endl;
	return 0;
}

