#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
	 printf("enter month name");
	 scanf("%c",&c);
switch(c)
	{
	 case 'j':
	   printf("junuary");break;
	 case 'f':
	   printf("fabary");break;
	 case 'm':
	   printf("march");break;
	 case 'a':
	   printf("april");break;
	 case 'r':
	   printf("may");break;
	 case 'u':
	   printf("june");break;
	 case 'c':
	   printf("july");break;
	 case 'h':
	   printf("august");break;
	 case 's':
	   printf("september");break;
	 case 'o':
	   printf("octomber");break;
	 case 'n':
	   printf("november");break;
	 case 'd':
	   printf("december");break;
	 default:
	   printf("no match");
	 }
getch();
}