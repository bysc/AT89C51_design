#include "system.h"
typedef unsigned char u8;
typedef unsigned int u16;
void main()
{
	unsigned int BI=0x00ff;//用于存储16位二进制数
	unsigned char HE[6]={0};//用于存储4位十六进制数，后缀H
	char index=-1;//
	unsigned char press;//按键值读取
	unsigned char tmp=16;
	welcome();
	while(1)	
		
	{
		delay(1000);
		//打印字符串，别以字符作为参数
		if((press=getvalue())!=255)
		{
			BI=(BI<<1)+(press=='1');
			writecmd(0x01);
			gotoxy(1,0);
			writedata(press);
			gotoxy(0,0);
			tmp=16;
			while(tmp)
			{
				tmp--;
				writedata((BI>>tmp&1)+'0');
			}
		}
		//update(&BI,HE,&index,press);	
		
	}
}
