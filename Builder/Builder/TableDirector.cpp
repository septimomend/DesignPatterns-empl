// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "TableDirector.h"


TableDirector::TableDirector()
{
}


TableDirector::~TableDirector()
{
	delete m_tb;
}

void TableDirector::setTableBuilder(TableBuilder& _tb)
{
	m_tb = &_tb;
}

void TableDirector::constructTable()
{
	m_tb->createNewTable();
	m_tb->setShape();
	m_tb->setHeight();
	m_tb->setWidth();
	m_tb->setLong();
	m_tb->setMaterial();
}

Table TableDirector::getTable()
{
	return m_tb->getReadyTable();
}