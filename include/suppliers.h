#include <string>
#include <iostream>
#include "global.h"

using namespace std;
class suppliers
{
	int id;				//Primary Key
	string name;
	long int phn;
	string addr_line1;
	string addr_line2;
	string addr_city;
	string addr_state;
public:
	void add_sup();
	void remove_supplier();
	void search_id();
};