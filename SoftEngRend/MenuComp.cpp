#include <iostream>
#include <string>
#include<vector>
#include "MenuComp.h"
using namespace std;
using std::string;

MenuComp::MenuComp(const string& katTitle, const string& katInfo, float katPrice, const string& katMenu)
{
	setTitle(katTitle);
	setInfo(katInfo);
	setPrice(katPrice);
}

MenuComp::~MenuComp()
{
	cout << "MenuComp gone\n";
}

void MenuComp::setTitle(const string& katTitle)
{
	Title = katTitle;
}
void MenuComp::setInfo(const string& katInfo)
{
	Info = katInfo;
}
void MenuComp::setPrice(float katPrice)
{
	price = katPrice;
}

const string MenuComp::getTitle() const
{
	return Title;
}
const string MenuComp::getInfo() const
{
	return Info;
}
float MenuComp::getPrice() const
{
	return price;
}

void MenuComp::newMenu(const string& katMenu)
{
	Menu.push_back(katMenu);
	for (int i = 0; i < Menu.size(); i++)
		cout << Menu[i] << '\n';
}
void MenuComp::deleteMenu()
{
	Menu.clear();
}
