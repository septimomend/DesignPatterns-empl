// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class Table
{
	friend ostream& operator<<(ostream& os, const Table& tb);

public:
	Table();
	~Table();

	void output();

	string m_shape, m_material;
	double m_height, m_width, m_long;
};

