#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
    printf("enter a any velue");
    scanf("%d",&a);
    printf("you have any velue is %d",a);
    scanf("%d",&b);
    printf("you have any velue is %d",b);
    scanf("%d",&c);
    printf("you have any velue is %d",c);

      if(a>b)
      {
	   if(a>c)
	   {
	   max=a;
	   }
	   else
	   {
	   max=c;
	   }
      }
      else
      {
	  if (b>c)
	  {
	  max=b;
	  }
	  else
	  {
	  max=c;
	  }
      }
      printf("%d is max",max);
      getch();
}