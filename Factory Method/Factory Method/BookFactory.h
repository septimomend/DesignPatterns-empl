// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "FantasyBook.h"
#include "NovelBook.h"
#include "FictionBook.h"

class BookFactory
{
public:
	BookFactory();
	~BookFactory();

	Book* getBook(eBookGenre& b);
};

