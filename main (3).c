/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float p,r,t,SI;
printf("enter principle value");
scanf("%f",&p);
printf("enter rate value");
scanf("%f",&r);
printf("enter time period");
scanf("%f",&t);
SI=(p*r*t)/100;
printf("simple intrest is %f",SI);


    return 0;
}

