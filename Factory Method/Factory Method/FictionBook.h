// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Book.h"

class FictionBook : public Book
{
public:
	FictionBook();
	~FictionBook();

	virtual void readBook();
	virtual void buyBook();
	virtual void bookName();
};

