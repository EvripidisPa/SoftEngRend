#include <iostream>
#include <string>
#include <vector>
#include "MenuComp.h"
#include "stdafx.h"
using namespace std;

MenuComp::MenuComp( string& katTitle,  string& katInfo, float katPrice,  string& katMenu)
{
	setTitle(katTitle);
	setInfo(katInfo);
	setPrice(katPrice);
}

MenuComp::~MenuComp()
{
	cout << "MenuComp gone\n";
}

void MenuComp::setTitle( string& katTitle)
{
	Title = katTitle;
}
void MenuComp::setInfo( string& katInfo)
{
	Info = katInfo;
}
void MenuComp::setPrice(float katPrice)
{
	price = katPrice;
}

 string MenuComp::getTitle() 
{
	return Title;
}
 string MenuComp::getInfo() 
{
	return Info;
}
float MenuComp::getPrice() 
{
	return price;
}

void MenuComp::deleteMenu()
{
	Menu.clear();
}
