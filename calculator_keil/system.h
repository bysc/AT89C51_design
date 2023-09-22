#ifndef SYSTEM_H
#define SYSTEM_H
#include <reg51.h>
#include <stdio.h>
#include "lcd1602.h"
#include "keyboard.h"

void welcome();
void biToHEX(unsigned int *BI,unsigned char *HE,char index);
void update(unsigned int *BI,unsigned char *HE,char *index,unsigned char press);	






#endif