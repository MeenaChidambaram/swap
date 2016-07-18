#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
clrscr();
scanf("%d%d",&a,&b);
printf("before swapping:%d%d\n",a,b);
{
temp=a;
a=b;
b=temp;
}
printf("after swapping:%d%d",a,b);
getch();
return 0;
}
