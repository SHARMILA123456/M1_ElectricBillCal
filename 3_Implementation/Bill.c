#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"MaElectricBill.h"

void details()
{
    printf("Enter your  area name:\n");
	scanf("%s", E.area);
	printf("Enter your  name:\n");
	scanf("%s", E.mname);
	printf("Enter your Meter Number:\n");
	scanf("%d", &E.meterno);
    printf("Enter units consumed:\n");
	scanf("%d", &E.unitconsumed);
    printf("Enter email ID :\n");
    scanf("%s", E.emailid);
    printf("Enter the permanent address :\n");
    scanf("%s", E.addr);
    printf("Enter the phone number : \n");
    scanf("%s", E.phoneno);
}

void Urban()
{
    int amount=0;
    E.unitconsumed;
    if(E.unitconsumed <=30 && E.unitconsumed >= 0)
    {
        amount = E.unitconsumed * 3.25; //3.25 is rupees
    }
    else if(E.unitconsumed >= 31 && E.unitconsumed <= 100)
    {
        amount = E.unitconsumed * 4.70;
    }
    else if(E.unitconsumed >= 101 && E.unitconsumed <= 200)
    {
        amount = E.unitconsumed * 6.25;
    }
    else
    {
        amount = E.unitconsumed * 7.30;
    }

    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", E.mname);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n",E.unitconsumed);
}

void Rural()
{
    int amount=0;
    E.unitconsumed;
    if(E.unitconsumed <=30 && E.unitconsumed >= 0)
    {
        amount = E.unitconsumed * 3.15; //3.25 is rupees
    }
    else if(E.unitconsumed >= 31 && E.unitconsumed <= 100)
    {
        amount = E.unitconsumed * 4.40;
    }
    else if(E.unitconsumed >= 101 && E.unitconsumed <= 200)
    {
        amount = E.unitconsumed * 5.95;
    }
    else
    {
        amount = E.unitconsumed * 6.80;
    }
    printf("Electricity Bill\n\n");
    printf("Name : %s\n", E.mname);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", E.unitconsumed);
}
