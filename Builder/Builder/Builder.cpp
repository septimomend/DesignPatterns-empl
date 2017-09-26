// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// Builder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OvalTable.h"
#include "MagazineTable.h"
#include "TableDirector.h"

int main()
{
	TableBuilder* pO = new OvalTable();
	TableBuilder* pM = new MagazineTable();
	TableDirector dir;
	dir.setTableBuilder(*pO);
	dir.constructTable();
	Table table = dir.getTable();

	TableDirector dir2;
	dir2.setTableBuilder(*pM);
	dir2.constructTable();
	Table table2 = dir2.getTable();

	cout << table;
	cout << "_____________" << endl;
	table2.output();

    return 0;
}