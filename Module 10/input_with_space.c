#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    //gets(a);
    fgets(a,21,stdin);
    printf("%s",a);
    return 0;
}