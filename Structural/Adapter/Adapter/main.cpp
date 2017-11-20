// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Notebook.h"

int main()
{
	OldStandard* os = new USB_2_0();
	Notebook notebook;
	notebook.plugUSB(os);				// notebook support old standard - USB 2.0

	NewStandard* ns = new USB_3_0();
	USBAdapter adapter(ns);				// but doesn't support new standard - USB 3.0
	notebook.plugUSB(&adapter);			// so connect new standard through usb adapter

    return 0;
}

