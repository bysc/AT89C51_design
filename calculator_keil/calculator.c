#include "system.h"
typedef unsigned char u8;
typedef unsigned int u16;
void main()
{
	unsigned int BI=0x00ff;//���ڴ洢16λ��������
	unsigned char HE[6]={0};//���ڴ洢4λʮ������������׺H
	char index=-1;//
	unsigned char press;//����ֵ��ȡ
	unsigned char tmp=16;
	welcome();
	while(1)	
		
	{
		delay(1000);
		//��ӡ�ַ����������ַ���Ϊ����
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
