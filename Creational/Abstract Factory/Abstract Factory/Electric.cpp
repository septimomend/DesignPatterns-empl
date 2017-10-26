// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Electric.h"


Electric::Electric()
{
}


Electric::~Electric()
{
}

Drum Electric::getDrum()
{
	std::cout << "Gotten an electric drum" << std::endl;
	return Drum();
}

Guitar Electric::getGuitar()
{
	std::cout << "Gotten an electric guitar" << std::endl;
	return Guitar();
}