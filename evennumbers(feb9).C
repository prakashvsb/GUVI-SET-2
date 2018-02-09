#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
clrscr();
printf("\n Enter the number");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
if(i%2==0)
 {
  printf("%d",i);
 }
}
return 0;
}
