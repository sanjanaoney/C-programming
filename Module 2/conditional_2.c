#include<stdio.h>
int main()
{
int taka;
scanf("%d",&taka);
if (taka>=100)
{
    printf("Burger Khabo");
}
else if(taka>=50)
{
    printf("Coffee Khabo");
}
else
{
printf("Kichu khabona");
}
return 0;
}