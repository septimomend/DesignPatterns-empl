// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "OvalTable.h"


OvalTable::OvalTable()
{
}


OvalTable::~OvalTable()
{
}

void OvalTable::setShape()
{
	table->m_shape = "Oval";
}

void OvalTable::setHeight()
{
	table->m_height = 0.7;
}

void OvalTable::setWidth()
{
	table->m_width = 1.0;
}

void OvalTable::setLong()
{
	table->m_long = 2.0;
}

void OvalTable::setMaterial()
{
	table->m_material = "Tree";
}