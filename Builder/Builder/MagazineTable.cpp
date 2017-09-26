// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "MagazineTable.h"


MagazineTable::MagazineTable()
{
}


MagazineTable::~MagazineTable()
{
}

void MagazineTable::setShape()
{
	table->m_shape = "Square";
}

void MagazineTable::setHeight()
{
	table->m_height = 0.5;
}

void MagazineTable::setWidth()
{
	table->m_width = 0.5;
}

void MagazineTable::setLong()
{
	table->m_long = 1.0;
}

void MagazineTable::setMaterial()
{
	table->m_material = "Glass";
}