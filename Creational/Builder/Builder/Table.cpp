// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Table.h"


Table::Table()
{
}

Table::~Table()
{
}

void Table::output()
{
	cout << "Shape: " << m_shape << endl;
	cout << "Height: " << m_height << "m" << endl;
	cout << "Width: " << m_width << "m" << endl;
	cout << "Long: " << m_long << "m" << endl;
	cout << "Material: " << m_material << endl;
}

ostream& operator<<(ostream& os, const Table& tb)
{
	os << "Shape: " << tb.m_shape << endl;
	os << "Height: " << tb.m_height << "m" << endl;
	os << "Width: " << tb.m_width << "m" << endl;
	os << "Long: " << tb.m_long << "m" << endl;
	os << "Material: " << tb.m_material << endl;
	return os;
}