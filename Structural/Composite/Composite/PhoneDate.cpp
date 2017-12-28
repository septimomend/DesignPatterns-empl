// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PhoneDate.h"

PhoneDate::PhoneDate()
{
}

PhoneDate::~PhoneDate()
{
}

string PhoneDate::getData() const
{
	string strDate = "";
	strDate += "\t\t<Date>";
	strDate += __TIMESTAMP__;
	strDate += "</Date>\n";
	return strDate;
}

void PhoneDate::setData(Database* pdb)
{
	cout << "PhoneDate [set data]: permission denied." << endl;
}