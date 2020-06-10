using namespace std;

#include"window.h"




Window::Window()

{
	setOwner("");
	setTitle("");
	setColor("");
}
Window::Window(string owner1, string title1, string color1)
{
	setOwner(owner1);
	setTitle(title1);
	setColor(color1);

}

void Window::setOwner(string s)
{
	owner = s;
}

void Window::setTitle(string w)
{
	title = w;
}
void Window::setColor(string pr)
{
	color = pr;
}
string Window::getOwner()
{
	return owner;
}
string Window::getTitle()
{
	return title;
}
string Window::getColor()
{
	return color;
}
void Window::print()
{
	cout << "Owner: " << owner << endl << "Title: " << title << endl << "Color: " << color << endl;
}

const bool Window::operator>(const Window& o)
{
	if (sizeof(this->owner) > sizeof(o.owner) &&
		sizeof(this->color) > sizeof(o.owner) &&
		sizeof(this->title) > sizeof(o.title))
		return true;
	return false;
}
const bool Window::operator>=(const Window& o)
{
	if (sizeof(this->owner) >= sizeof(o.owner) &&
		sizeof(this->color) >= sizeof(o.owner) &&
		sizeof(this->title) >= sizeof(o.title))
		return true;
	return false;
}
const bool Window::operator<(const Window& o)
{
	if (sizeof(this->owner) > sizeof(o.owner) &&
		sizeof(this->color) > sizeof(o.owner) &&
		sizeof(this->title) > sizeof(o.title))
		return false;
	return true;
}
const bool Window::operator<=(const Window& o)
{
	if (sizeof(this->owner) >= sizeof(o.owner) &&
		sizeof(this->color) >= sizeof(o.owner) &&
		sizeof(this->title) >= sizeof(o.title))
		return false;
	return true;
}
const bool Window::operator!=(const Window& o)
{
	if (this->owner != o.owner &&
		this->color != o.color &&
		this->title != o.title)
		return true;
	return false;
}
const bool Window::operator==(const Window& o)
{
	if (this->owner == o.owner &&
		this->color == o.color &&
		this->title == o.title)
		return true;
	return false;
}
const Window& Window::operator=(const Window& o)
{
	owner = o.owner;
	title = o.title;
	color = o.color;
	return *this;
}
ostream& operator<<(std::ostream& out, const Window& win)
{
	out << "Window(" << win.owner << ", " << win.title << ", " << win.color << ")";
	return out;
}
istream& operator>> (std::istream& in, Window& win)
{
	in >> win.owner;
	in >> win.title;
	in >> win.color;
	return in;
}