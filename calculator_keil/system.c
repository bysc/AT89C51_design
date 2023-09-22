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
void biToHEX(unsigned int *BI,unsigned char *HE,char index)
{
	unsigned char i,j,tmp;
	for(i=0;i<4;i++)
	{
		tmp=(3-i)*4;
		for(j=tmp;j<tmp+4;j++)
		{
			HE[i]=HE[i]<<1+(((*BI)>>j)&1);
		}
		if(HE[i]>=0&&HE[i]<=9) HE[i]+='0';
		else if(HE[i]>=10) HE[i]=HE[i]-10+'A';
		HE[4]='H';
	}
	writecmd(0x01);
//	for(i=index;i>=0;i--) writedata((((*BI)>>i)&1)+'0');
	gotoxy(1,0);
	printstr(HE);
}
void update(unsigned int *BI,unsigned char *HE,char *index,unsigned char press)
{
	(*BI)=(*BI)<<1+(press=='1');
	(*index)++;
//	biToHEX(BI,HE,index);
}