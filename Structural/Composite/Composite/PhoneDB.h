// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Database.h"

class PhoneDB : public Database
{
public:
	PhoneDB();
	~PhoneDB();

	virtual string getData() const;
	virtual void setData(Database* pdb);

	vector<Database*> vPhones;
};

