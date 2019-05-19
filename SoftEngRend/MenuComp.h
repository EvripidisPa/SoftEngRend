#ifndef MENUCOMP_H
#define MENUCOMP_H

#include <string>
#include <vector>
//using namespace std;
using std::string;
//#include "Menu.h"
class MenuComp
{
public:
	MenuComp(const string&, const string&, float, const string&);
	~MenuComp();
	const string getTitle() const;
	void setTitle(const string&);
	const string getInfo() const;
	void setInfo(const string&);
	float getPrice() const;
	void setPrice(float);

	void newMenu(const string&);
	void deleteMenu();

public:
	string Title;
	string Info;
	float price;
	std::vector<string> Menu;
};

#endif // MENUCOMP_H
