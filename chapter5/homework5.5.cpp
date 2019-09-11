#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int grade;
	const vector<string> level{ "A+","A","B","C","D","E" };
	cin >> grade;
	if (grade == 100)
		cout << level[0];
	else if (grade >= 90)
		cout << level[1];
	else if (grade >= 80)
		cout << level[2];
	else if (grade >= 70)
		cout << level[3];
	else if (grade >= 60)
		cout << level[4];
	else
		cout << level[5];
};


