#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vi(10, 10);
	for (auto &i = vi.begin(); i != vi.end(); ++i)
		*i = *i * 2;
	for (auto &i = vi.begin(); i != vi.end(); ++i)
	cout << *i <<endl;

};
