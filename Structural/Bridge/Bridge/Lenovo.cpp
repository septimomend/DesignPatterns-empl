// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Lenovo.h"


Lenovo::Lenovo()
{
}


Lenovo::~Lenovo()
{
}

void Lenovo::setProcessor()
{
	cout << "Processor Intel Core i7 is setted up." << endl;
}

void Lenovo::setDisplay()
{
	cout << "Liquid crystal display is setted up." << endl;
}

void Lenovo::setVideocard()
{
	vcard->setVideocard();
	vcard->runVideocard();
}