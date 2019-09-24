#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sadd(string &s, string front_s, string back_s);

int main() {
	vector<string> vs{ "1","2","3","4","5","6","7","8","9" };
	int sum = 0;
	for (auto i : vs) {
		sum += stoi(i);
	}
	cout << sum << endl;
	vector<string> vs{ "1.01","2.02","3.03","4.04","5.05","6.06","7.07","8.08","9.09" };
	double sum = 0;
	for (auto i : vs) {
		sum += stod(i);
	}
	cout << sum << endl;
}










