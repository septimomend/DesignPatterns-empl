// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "OvalTableBuilder.h"


OvalTableBuilder::OvalTableBuilder()
{
}


OvalTableBuilder::~OvalTableBuilder()
{
}

void OvalTableBuilder::setShape()
{
	table->m_shape = "Oval";
}

void OvalTableBuilder::setHeight()
{
	table->m_height = 0.7;
}

void OvalTableBuilder::setWidth()
{
	table->m_width = 1.0;
}

void OvalTableBuilder::setLong()
{
	table->m_long = 2.0;
}

void OvalTableBuilder::setMaterial()
{
	table->m_material = "Tree";
}