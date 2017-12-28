// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "phonelib.h"

int main()
{
	Database* db = new PhoneDB();
	
	Database* model = new PhoneModel(2);
	Database* parameters = new PhoneParameters();
	Database* date = new PhoneDate();
	Database* battery = new PhoneBattery();

	parameters->setData(date);
	parameters->setData(battery);
	db->setData(model);
	db->setData(parameters);

	Database* model2 = new PhoneModel();
	Database* parameters2 = new PhoneParameters();
	Database* date2 = new PhoneDate();
	Database* battery2 = new PhoneBattery();

	parameters2->setData(date2);
	parameters2->setData(battery2);
	db->setData(model2);
	db->setData(parameters2);

	cout << db->getData();

    return 0;
}

