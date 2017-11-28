// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Notebook.h"

class Dell : public Notebook
{
public:
	Dell();
	~Dell();

	virtual void setProcessor();
	virtual void setDisplay();
	virtual void setVideocard();
};

