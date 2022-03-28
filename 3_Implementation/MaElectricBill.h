#ifndef __MaElectricBill_H__
#define __MaElectricBill_H__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct ElectricBill
{
	char area[6];
	char mname[15];
	int meterno;
    int unitconsumed;
	char emailid[15];
	char addr[100];
	int phoneno[10];
};

struct Bill E;
#endif
