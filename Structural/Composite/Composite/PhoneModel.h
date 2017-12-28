// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Database.h"

class PhoneModel : public Database
{
public:
	PhoneModel(int model = 10);
	~PhoneModel();

	virtual string getData() const;
	virtual void setData(Database* pdb);

private:
	int m_model;
};

