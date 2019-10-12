#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>

using namespace std;



int main()
{
	list<int> li{ 1,2,3,4,5,6,7,8,9,0 };
	if (find(li.rbegin(), li.rend(), 0) != li.rend())
		cout << *find(li.rbegin(), li.rend(), 0) << endl;
	else
		cout << "not found" << endl;
}



















