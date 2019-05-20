#include "stdafx.h"
#include <iostream>
#include <string>
#include "Menu.h"

Menu::Menu(const Store* ST, MenuComp& CMP)
{
	store = ST;
	comp.push_back(CMP);
}

void Menu::updateMenu(MenuComp& CMP)
{
	comp.push_back(CMP);
}

void Menu::deleteMenu()
{
	comp.clear();

}

void Menu::newMenu(MenuComp & CMP)
{
	deleteMenu();
	comp.push_back(CMP);
}
