#include<stdio.h>
int main()
{
int taka;
scanf("%d",&taka);
if(taka>=5000)
{
printf("Will go to cox's bazar\n");
if(taka>=10000)
{
    printf("Will go to saint martin\n");
}
else
{
printf("will come back from cox's bazar\n");
}
}
else
{
    printf("Will not go to cox's bazar");
}
return 0;

}  

