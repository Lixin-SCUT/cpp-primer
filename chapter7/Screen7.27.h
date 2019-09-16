#ifndef SCREEN_H
#define SCREEN_H
#include<string>

using std::string;
using std::istream;
using std::ostream;

class Screen
{
private:
	typedef string::size_type pos;
	typedef string str;

public:
	Screen()=default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
	
	~Screen();

public:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	Screen &move(pos r, pos c) {
		pos row = r*width;
		cursor = row + c;
		return *this;
	}

	inline Screen &set(char c) {
		contents[cursor]=c;
		return *this;
	}

	ostream &display(ostream &os) const {
		os << contents;
		return os;
	}
	ostream &display(ostream &os)  {
		os << contents;
		return os;
	}
};



Screen::~Screen()
{
}
#endif // !SCREEN_H

#pragma once
