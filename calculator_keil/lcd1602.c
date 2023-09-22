#include "lcd1602.h"
void delay(unsigned int times)
{
	unsigned int i,j;
	for(i=0;i<times;i++)
		for(j=0;j<112;j++);
}
void writecmd(unsigned char cmd)
{
	RS=0;
	RW=0;
	EN=0;
	LCD=cmd;
	delay(2);
	EN=1;
	delay(2);
	EN=0;
}
void writedata(unsigned char mydata)
{
	RS=1;
	RW=0;
	EN=0;
	LCD=mydata;
	delay(2);
	EN=1;
	delay(2);
	EN=0;
}
void printstr(unsigned char*str)
{
	while(*str!='\0')
		writedata(*str++);
}
void turnon()
{
	writecmd(0x0c);
}
void turnoff()
{
	writecmd(0x08);
}
void gotoxy(unsigned char x,unsigned char y)
{
	if(x==0) writecmd(0x80+y);
	if(x==1) writecmd(0xc0+y);
}
void init()
{
	writecmd(0x38);//8位，16*2,5*7
	writecmd(0x0c);//开启，无光标，不闪烁
	writecmd(0x06);//光标右移，不整体移动
	writecmd(0x01);//清屏
}