#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
      a=1;
      do
      {
      if(a%2==0)
      printf("%d\n",a);
      a++;
      }
      while(a<=10);

getch();
}