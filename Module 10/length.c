#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
scanf("%s",a);
//int count=0;
//int i;
// for(i=0;a[i]!='\0';i++)
// {
//     count++;
// }
// int i=0;
// while(a[i]!='\0')
// {
//     count++;
//     i++;
// }
//printf("%d",count);
int st=strlen(a);
printf("%d",st);

return 0;
}