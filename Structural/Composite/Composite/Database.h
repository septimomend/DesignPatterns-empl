// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class Database
{
public:
	Database();
	~Database();

	virtual string getData() const = 0;
	virtual void setData(Database* pdb) = 0;
};

