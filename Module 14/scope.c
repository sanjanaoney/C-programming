#include<stdio.h>
void fun(void)
{
    int s=10;
    printf("the address of 10 is %p\n",&s);
}
int main()
{
int s=20;
printf("the address of 20 is %p\n",&s);
fun();
return 0;
}