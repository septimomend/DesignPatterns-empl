// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class ClassicSingleton
{
public:
	static ClassicSingleton* getInstance();
	void setValue(int val);
	void outputVal();

private:
	ClassicSingleton();
	ClassicSingleton(const ClassicSingleton& cs) = delete;
	ClassicSingleton& operator=(const ClassicSingleton& cs) = delete;
	~ClassicSingleton();

	static ClassicSingleton* m_pInstance;

	int m_someval;
};

