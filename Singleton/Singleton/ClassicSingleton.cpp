// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "ClassicSingleton.h"

ClassicSingleton* ClassicSingleton::m_pInstance = 0;

ClassicSingleton::ClassicSingleton()
{
}


ClassicSingleton::~ClassicSingleton()
{
	delete m_pInstance;
}

ClassicSingleton* ClassicSingleton::getInstance()
{
	if (m_pInstance == nullptr)
		m_pInstance = new ClassicSingleton();
	return m_pInstance;
}

void ClassicSingleton::setValue(int val)
{
	m_someval = val;
	cout << "Value " << val << " is assigned." << endl;
}

void ClassicSingleton::outputVal()
{
	cout << "Value is " << m_someval << endl;
}