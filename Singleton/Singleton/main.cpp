// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassicSingleton.h"
#include "MeyersSingleton.h"

int main()
{
	int value;

	cout << "Stage 1" << endl;
	ClassicSingleton* cs = ClassicSingleton::getInstance();
	cout << "Classic cs (address): " << cs << endl;
	cout << "Set m_someval of cs: ";
	cin >> value;
	cs->setValue(value);
	cout << "Get m_someval of cs: ";
	cs->outputVal();

	cout << "\nStage 2" << endl;
	MeyersSingleton& ms = MeyersSingleton::getInstance();
	cout << "Meyers' ms (address): " << &ms << endl;

	cout << "\nStage 3" << endl;
	ClassicSingleton* cs2 = ClassicSingleton::getInstance();
	cout << "Classic cs2 (address): " << cs2 << endl;
	cout << "Get m_someval of cs2: ";
	cs2->outputVal();

	cout << "\nStage 4" << endl;
	MeyersSingleton& ms2 = MeyersSingleton::getInstance();
	cout << "Meyers' ms (address): " << &ms2 << endl;
	return 0;
}

