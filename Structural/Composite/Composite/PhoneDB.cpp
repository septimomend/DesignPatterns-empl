// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PhoneDB.h"

PhoneDB::PhoneDB()
{
}

PhoneDB::~PhoneDB()
{
}

string PhoneDB::getData() const
{
	string str = "";
	str += "<Phones>\n";
	if (!vPhones.empty())
	{
		for (auto it = vPhones.begin(); it != vPhones.end(); ++it)
			str += (*it)->getData();
	}
	else
		return str = "Sorry, PhoneDB is empty.";
	str += "</Phones>\n";
	return str;
}

void PhoneDB::setData(Database* pdb)
{
	vPhones.push_back(pdb);
}