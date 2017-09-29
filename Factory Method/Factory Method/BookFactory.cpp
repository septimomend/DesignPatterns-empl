// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "BookFactory.h"


BookFactory::BookFactory()
{
}


BookFactory::~BookFactory()
{
}

Book* BookFactory::getBook(eBookGenre& b)
{
	switch (b)
	{
	case FICTION:
		return new FictionBook();
		break;
	case NOVEL:
		return new NovelBook();
		break;
	case FANTASY:
		return new FantasyBook();
		break;
	default:
		cout << "No such book" << endl;
		break;
	}
}