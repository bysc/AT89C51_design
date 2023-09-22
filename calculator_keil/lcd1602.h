#ifndef LCD1602_H
#define LCD1602_H
#include <reg51.h>
#include <stdio.h>
#define LCD P0
//LCD1602的三个控制端
sbit RS=P1^0;
sbit RW=P1^1;
sbit EN=P1^2;
//延时函数
void delay(unsigned int times);
//写指令
void writecmd(unsigned char cmd);
//写入数据
void writedata(unsigned char mydata);
//输出字符串
void printstr(unsigned char*str);
//显示屏开启
void turnon();
//显示屏关闭
void turnoff();
//显示屏初始化
void init();
//光标定位
void gotoxy(unsigned char x,unsigned char y);//0-1,0-15

#endif