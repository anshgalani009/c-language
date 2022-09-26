#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
    printf("enter a any velue");
    scanf("%d",&a);
    printf("you have any velue is %d",a);
    scanf("%d",&b);
    printf("you have any velue is %d",b);
    scanf("%d",&c);
    printf("you have any velue is %d",c);
    scanf("%d",&d);
    printf("you have any velue is %d",d);

    if(a>b && a>c && a>d)
    {
    printf("a\n");
    }
    else if(b>c && b>d)
    {
    printf("b\n");
    }
    else if (c>d)
    {
    printf("c\n");
    }
    else
    {
    printf("c\d");
    }

getch();
}
