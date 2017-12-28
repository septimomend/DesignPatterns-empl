// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PhoneParameters.h"

PhoneParameters::PhoneParameters()
{
}

PhoneParameters::~PhoneParameters()
{
}

string PhoneParameters::getData() const
{
	string str = "";
	str += "\t<Parameters>\n";
	if (!vParameters.empty())
	{
		for (auto it = vParameters.begin(); it != vParameters.end(); ++it)
			str += (*it)->getData();
	}
	else
		return str = "Sorry, parameters are unavalaiabled.";
	str += "\t</Parameters>\n";
	return str;
}

void PhoneParameters::setData(Database* param)
{
	vParameters.push_back(param);
}