#pragma once
#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Window
{

protected:
	string owner;
	string title;
	string color;

public:
	Window();
	Window(string owner1, string title1, string color1);

	void setOwner(string s);
	void setTitle(string w);
	void setColor(string pr);
	string getOwner();
	string getTitle();
	string getColor();
	void print();
	const bool operator<(const Window& o);
	const bool operator>(const Window& o);
	const bool operator<=(const Window& o);
	const bool operator>=(const Window& o);
	const bool operator!=(const Window& o);
	const bool operator==(const Window& o);
	const Window& operator=(const Window& o);
	friend ostream& operator<<(std::ostream& out, const Window& win);
	friend istream& operator>> (std::istream& in, Window& win);
};

#endif // WINDOW_H_INCLUDED
