// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PhoneBattery.h"

PhoneBattery::PhoneBattery()
{
}

PhoneBattery::~PhoneBattery()
{
}

string PhoneBattery::getData() const
{
	srand(static_cast<unsigned int>(time(NULL)));
	string strBattery = "";
	strBattery += "\t\t<Battery>";
	int amper = rand() % 4000 + 1500;
	strBattery += to_string(amper) + "mA";
	strBattery += "</Battery>\n";
	return strBattery;
}

void PhoneBattery::setData(Database* pdb)
{
	cout << "PhoneBattery [set data]: permission denied." << endl;
}