// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "MagazineTableBuilder.h"


MagazineTableBuilder::MagazineTableBuilder()
{
}


MagazineTableBuilder::~MagazineTableBuilder()
{
}

void MagazineTableBuilder::setShape()
{
	table->m_shape = "Square";
}

void MagazineTableBuilder::setHeight()
{
	table->m_height = 0.5;
}

void MagazineTableBuilder::setWidth()
{
	table->m_width = 0.5;
}

void MagazineTableBuilder::setLong()
{
	table->m_long = 1.0;
}

void MagazineTableBuilder::setMaterial()
{
	table->m_material = "Glass";
}