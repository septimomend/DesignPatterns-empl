// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PhoneModel.h"

PhoneModel::PhoneModel(int model) : m_model(model)
{
}

PhoneModel::~PhoneModel()
{
}

string PhoneModel::getData() const
{
	string strModel = "";
	strModel += "\t<Model>";
	switch (m_model)
	{
	case 0:
		strModel += "Nokia";
		break;
	case 1:
		strModel += "Samsung";
		break;
	case 2:
		strModel += "Meizu";
		break;
	default:
		strModel += "Cup with lace";
		break;
	}
	strModel += "</Model>\n";
	return strModel;
}

void PhoneModel::setData(Database* pdb)
{
	cout << "PhoneModel [set data]: permission denied." << endl;
}