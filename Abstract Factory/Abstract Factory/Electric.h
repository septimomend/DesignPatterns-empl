// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "MusicInstruments.h"

class Electric : public MusicInstruments
{
public:
	Electric();
	~Electric();

	Drum getDrum();
	Guitar getGuitar();
};

