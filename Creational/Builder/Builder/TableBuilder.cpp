// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "TableBuilder.h"

TableBuilder::TableBuilder()
{
}

TableBuilder::~TableBuilder()
{
	delete table;
}

void TableBuilder::createNewTable()
{
	table = new Table();
}

Table TableBuilder::getReadyTable()
{
	return *table;
}