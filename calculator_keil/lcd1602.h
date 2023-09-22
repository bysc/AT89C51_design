#ifndef LCD1602_H
#define LCD1602_H
#include <reg51.h>
#include <stdio.h>
#define LCD P0
//LCD1602���������ƶ�
sbit RS=P1^0;
sbit RW=P1^1;
sbit EN=P1^2;
//��ʱ����
void delay(unsigned int times);
//дָ��
void writecmd(unsigned char cmd);
//д������
void writedata(unsigned char mydata);
//����ַ���
void printstr(unsigned char*str);
//��ʾ������
void turnon();
//��ʾ���ر�
void turnoff();
//��ʾ����ʼ��
void init();
//��궨λ
void gotoxy(unsigned char x,unsigned char y);//0-1,0-15

#endif