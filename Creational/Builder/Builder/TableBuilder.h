// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Table.h"

class TableBuilder
{
public:
	TableBuilder();
	~TableBuilder();

protected:
	Table* table;

public:
	virtual void setShape() = 0;
	virtual void setHeight() = 0;
	virtual void setWidth() = 0;
	virtual void setLong() = 0;
	virtual void setMaterial() = 0;

	void createNewTable();
	Table getReadyTable();
};