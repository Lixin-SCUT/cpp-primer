#pragma once
class Window_mgr
{
public:
	void clear();
};

class Screen
{
public:
	friend void Window_mgr::clear();

};

void Window_mgr::clear() {
}