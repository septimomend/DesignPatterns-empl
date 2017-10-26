// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Book.h"

class FantasyBook :	public Book
{
public:
	FantasyBook();
	~FantasyBook();

	virtual void readBook();
	virtual void buyBook();
	virtual void bookName();
};

