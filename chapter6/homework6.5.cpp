#include <iostream>
#include<vector>
#include<string>
using namespace std;
int num_abs(int num);

int main() {
	int i;
	while (cin) {
		cout << "please input one number:";
		cin >> i;
		cout << num_abs(i) << endl;
	}
};

int num_abs(int num) {
	return num>0?num:-num;
}

