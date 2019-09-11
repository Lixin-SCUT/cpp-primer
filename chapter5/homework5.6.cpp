#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int grade;
	const vector<string> level{ "A+","A","B","C","D","E" };
	cin >> grade;
	cout << ((grade < 60) ? level[5] : (grade < 70) ? level[4] : (grade < 80) ? level[3] : (grade < 90) ? level[2] : (grade <100) ? level[1] : level[0]);
};


