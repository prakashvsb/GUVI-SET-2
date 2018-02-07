#include<stdio.h>
#include<conio.h>
int main()
{
  int power,num,i=1;
  int sum=1;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  printf("\nEnter power: ");
  scanf("%d",&power);
  while(i<=power)
  {
            sum=sum*num;
            i++;
  }
  printf("%d",sum);
}
