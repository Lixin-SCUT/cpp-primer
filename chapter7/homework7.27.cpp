#include <iostream>
#include<vector>
#include<string>
#include "Screen.h"

using namespace std;

int main() {
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;
}



