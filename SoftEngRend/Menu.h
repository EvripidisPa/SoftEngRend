#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>
#include "MenuComp.h"
using namespace std;
class Store;

class Menu
{
public:
	Menu(const Store*, MenuComp&);
	void newMenu(MenuComp&);
	void deleteMenu();
	void updateMenu(MenuComp&);
private:
	const Store* store;
	std::vector<MenuComp> comp;
};

#endif
