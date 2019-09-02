#include <iostream>
using namespace std;

int main() {
	int begin,end;
	cout << "Please input one number:";
	cin >> begin;
	cout << "Please input another number:";
	cin >> end;
	if (end < begin)
		swap(begin, end);
	while (end >= begin) 
	  cout << begin++ << endl;
}
