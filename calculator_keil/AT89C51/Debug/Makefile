###############################################################################
# Makefile for project 
###############################################################################

## General options
PROJECT = 
MCU = AT89C51
COMPILER = "Keil for 8051"
TARGET = Debug
SHELL = C:\windows\system32\cmd.exe

## Tools general options
CCFLAGS=ROM(SMALL) BROWSE DEBUG CODE OBJECTEXTEND PREPRINT

## Processing Tools
CC=C51.exe
LD=BL51.exe
ASM=A51.exe
#  D:/projects/proteus/calculator/AT89C51/Debug/Debug.OMF: TOOL=LD
#     D:/projects/proteus/calculator/AT89C51/Debug/main.OBJ: TOOL=CC
#        D:/projects/proteus/calculator/AT89C51/main.c
#     D:/projects/proteus/calculator/AT89C51/Debug/keyboard.OBJ: TOOL=CC
#        D:/projects/proteus/calculator/keyboard.c
#     D:/projects/proteus/calculator/AT89C51/Debug/lcd1602.OBJ: TOOL=CC
#        D:/projects/proteus/calculator/lcd1602.c

# Build tree:
all:	Debug

Debug:	Debug.OMF

Debug.OMF:	main.OBJ keyboard.OBJ lcd1602.OBJ 
	"C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\Tools\MAKE\RunTool.exe" --good-exits=0,1 --executable=$(LD) "main.OBJ","keyboard.OBJ","lcd1602.OBJ" TO "Debug.OMF" $(LDFLAGS) 

main.OBJ:	../main.c 
	"C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\Tools\MAKE\RunTool.exe" --good-exits=0,1 --executable=$(CC) "..\main.c" $(CCFLAGS)  OBJECT("main.OBJ")

keyboard.OBJ:	../../keyboard.c 
	"C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\Tools\MAKE\RunTool.exe" --good-exits=0,1 --executable=$(CC) "..\..\keyboard.c" $(CCFLAGS)  OBJECT("keyboard.OBJ")

lcd1602.OBJ:	../../lcd1602.c 
	"C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\Tools\MAKE\RunTool.exe" --good-exits=0,1 --executable=$(CC) "..\..\lcd1602.c" $(CCFLAGS)  OBJECT("lcd1602.OBJ")

# tidy - delete all temporary files which are not involved in the target generation
tidy:
	rm -rf Debug.M51
	rm -rf ./main.lst
	rm -rf ./main.I
	rm -rf ./keyboard.lst
	rm -rf ./keyboard.I
	rm -rf ./lcd1602.lst
	rm -rf ./lcd1602.I

# cleanup - delete all generated files
clean:	tidy
	rm -rf Debug.OMF
	rm -rf main.OBJ
	rm -rf keyboard.OBJ
	rm -rf lcd1602.OBJ
