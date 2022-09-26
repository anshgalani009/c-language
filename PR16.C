#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
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
    scanf("%d",&e);
    printf("you have any velue is %d",e);

    if(a>b && a>c && a>d && a>e)
    {
    printf("a\n");
    }
    else if(b>c && b>d && b>e)
    {
    printf("b\n");
    }
    else if (c>d && c>e)
    {
    printf("c\n");
    }
    else if (d>e)
    {
    printf("c\d");
    }
    else
    {
    printf("d\e");
    }

getch();
}
