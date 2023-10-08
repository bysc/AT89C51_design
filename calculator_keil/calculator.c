#include "system.h"
typedef unsigned char u8;
typedef unsigned int u16;
void main()
{
	unsigned int BI=0x0000;//用于存储16位二进制数
	unsigned char HE[6]={0};//用于存储4位十六进制数，后缀H
	char index=-1;//
	unsigned char press;//按键值读取
	unsigned char tmp;
	unsigned char i,j;
	welcome();
	while(1)	
		
	{	
		delay(500);
			switch(getvalue())
			{
				case 255: break;
				case '1': 
					writedata('1');
					BI=((BI)<<1)+1;break;
				case '0': BI=(BI)<<1;
									writedata('0');
									break;
				case 'c':writecmd(0x01);
						BI=0;
				
				
				break;
				case '=':
				{
					for(i=0;i<4;i++)
					{
						tmp=(3-i)*4;
						for(j=tmp;j<tmp+4;j++)
						{
							HE[i]=(HE[i]<<1)+((BI>>j)&1);
						}
						if(HE[i]>=0&&HE[i]<=9) HE[i]+='0';
		        else if(HE[i]>=10) HE[i]=HE[i]-10+'A';
		        HE[4]='H';
					}
				}
				gotoxy(1,0);
				printstr(HE);
			}
	}
}
