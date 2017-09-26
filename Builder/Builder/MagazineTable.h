// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "TableBuilder.h"

class MagazineTable : public TableBuilder 
{
public:
	MagazineTable();
	~MagazineTable();

	virtual void setShape();
	virtual void setHeight();
	virtual void setWidth();
	virtual void setLong();
	virtual void setMaterial();
};

