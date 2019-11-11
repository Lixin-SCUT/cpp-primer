#pragma  warning (disable:4996) 
#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
#include<map>
#include<set>
#include<unordered_map>
#include<sstream>
#include<memory>
using namespace std;

class Message
{
	friend class Folder; 
	friend void swap(Message &, Message &);
public:
	explicit Message(const string &str = "") :contents(str) {};
	Message(const Message &m) :contents(m.contents), folders(m.folders) { add_to_Folders(m); };
	Message& operator=(const Message &m);
	~Message() { remove_from_Folders(); };
	void save(Folder&);
	void remove(Folder&);
private:
	string contents;
	set<Folder*> folders;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};

void Message::save(Folder &f) {
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder &f) {
	folders.erase(&f);
	f.remMsg(this);
}

void Message::add_to_Folders(const Message &m) {
	for (auto f : m.folders)
		f->addMsg(this);
}
void Message::remove_from_Folders() {
	for (auto f : folders)
		f->remMsg(this);
}

Message& Message::operator=(const Message &m){
	remove_from_Folders();
	contents = m.contents;
	folders = m.folders;
	add_to_Folders(m);
	return *this;

}

void swap(Message &lhs, Message &rhs) {
	using std::swap;
	for (auto f : lhs.folders)
		f->remMsg(&lhs);
	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}

int main()
{

}












