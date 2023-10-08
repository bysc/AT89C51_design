#include "system.h"
void welcome()
{
	init();
	printstr("Welcome!");
	gotoxy(1,0);
	printstr("bysc");
	delay(500);
	writecmd(0x01);
}
