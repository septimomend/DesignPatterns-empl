// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

enum eBookGenre
{
	FICTION,
	FANTASY,
	NOVEL
};

class Book
{
public:
	Book();
	~Book();

	virtual void readBook() = 0;
	virtual void buyBook() = 0;
	virtual void bookName() = 0;
};

