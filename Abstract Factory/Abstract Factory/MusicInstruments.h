// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Drum.h"
#include "Guitar.h"

class MusicInstruments
{
public:
	virtual Drum getDrum() = 0;
	virtual Guitar getGuitar() = 0;
};