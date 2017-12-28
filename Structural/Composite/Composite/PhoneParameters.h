// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Database.h"

class PhoneParameters : public Database
{
public:
	PhoneParameters();
	~PhoneParameters();

	virtual string getData() const;
	virtual void setData(Database* param);

	vector<Database*> vParameters;
};

