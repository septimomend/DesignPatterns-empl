// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// AbstractFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Acoustic.h"
#include "Electric.h"

int main()
{
	MusicInstruments* mie = new Electric();
	Drum drum = mie->getDrum();
	Guitar guitar = mie->getGuitar();

	MusicInstruments* mia = new Acoustic();
	Drum drum2 = mia->getDrum();
	Guitar guitar2 = mia->getGuitar();

    return 0;
}

