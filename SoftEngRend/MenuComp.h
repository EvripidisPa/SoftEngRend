#ifndef MENUCOMP_H
#define MENUCOMP_H
#include <iomanip>
#include <string>
#include <vector>
using std::string;
//#include "Menu.h"
class MenuComp
{
public:
	MenuComp( string&,  string&, float,  string&);
	~MenuComp();
	string getTitle() ;
	void setTitle( string&);
	string getInfo() ;
	void setInfo( string&);
	float getPrice() ;
	void setPrice(float);

private:
	string Title;
	string Info;
	float price;
	std::vector<string> Menu;
};

#endif // MENUCOMP_H
