#include<stdio.h>
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
printf("%d\n",sum(5,10));
printf("%d\n",sum(15,101));
return 0;
}