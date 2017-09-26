// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "TableBuilder.h"

class TableDirector
{
public:
	TableDirector();
	~TableDirector();

	void setTableBuilder(TableBuilder& _tb);
	void constructTable();
	Table getTable();

private:
	TableBuilder* m_tb;
};

