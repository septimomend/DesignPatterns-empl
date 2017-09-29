// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// FactoryMethod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BookFactory.h"

int main()
{
	eBookGenre book = NOVEL;
	BookFactory bf;
	Book* bk = bf.getBook(book);
	bk->bookName();
	bk->buyBook();
	bk->readBook();
	delete bk;
    return 0;
}

