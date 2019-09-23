#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;


int main() {
	//list<int> li = { 1,2,3,4,5,6,7,8 }; 
	/*auto iter = li.begin();
	while (iter != li.end()) {
		if (*iter % 2) {
			iter = li.insert(iter, *iter);
			advance(iter, 2);
		}
		else
		{
			iter = li.erase(iter);
		}
	}*/
	forward_list<int> li = { 1,2,3,4,5,6,7,8 };
	auto iter = li.begin();
	auto iter2 = li.before_begin();
	while (iter != li.end()) {
		if (*iter % 2) {
			iter = li.insert_after(iter, *iter);
			advance(iter, 1);
			advance(iter2, 2);
		}
		else
		{
			
			iter = li.erase_after(iter2);
		}
	}
}










