// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Acoustic.h"


Acoustic::Acoustic()
{
}


Acoustic::~Acoustic()
{
}

Drum Acoustic::getDrum()
{
	std::cout << "Gotten an acoustic drum" << std::endl;
	return Drum();
}

Guitar Acoustic::getGuitar()
{
	std::cout << "Gotten an acoustic guitar" << std::endl;
	return Guitar();
}