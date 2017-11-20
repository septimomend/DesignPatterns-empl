// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Notebook.h"

Notebook::Notebook()
{
}


Notebook::~Notebook()
{
}

void Notebook::plugUSB(OldStandard* oldUSB)
{
	if (oldUSB->connect())
		cout << "USB connected successfully." << endl;
	else
		cout << "Error. Has not connected." << endl;
} 