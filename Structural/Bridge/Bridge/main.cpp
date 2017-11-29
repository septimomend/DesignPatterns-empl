// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lenovo.h"
#include "Dell.h"

int main()
{
	cout << "Lenovo:" << endl;
	Notebook* nbook = new Lenovo();
	nbook->setProcessor();
	nbook->setDisplay();
	Videocard* video = new nvidia920m();	// choose card
	nbook->vcard = video;					// use bridge
	nbook->setVideocard();					// and set this one

	cout << "\nDell:" << endl;
	Notebook* nbook2 = new Dell();
	nbook2->setProcessor();
	nbook2->setDisplay();
	Videocard* video2 = new amdR5();
	nbook2->vcard = video2;
	nbook2->setVideocard();

	cout << "\nLenovo:" << endl;
	Notebook* nbook3 = new Lenovo();
	nbook3->setProcessor();
	nbook3->setDisplay();
	Videocard* video3 = new amdR5();
	nbook3->vcard = video3;
	nbook3->setVideocard();

    return 0;
}

