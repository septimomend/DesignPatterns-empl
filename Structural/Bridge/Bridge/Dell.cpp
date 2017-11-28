// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Dell.h"


Dell::Dell()
{
}


Dell::~Dell()
{
}

void Dell::setProcessor()
{
	cout << "Processor AMD A9 is setted up." << endl;
}

void Dell::setDisplay()
{
	cout << "Light-emitting diode display is setted up." << endl;
}

void Dell::setVideocard()
{
	vcard->setVideocard();
	vcard->runVideocard();
}