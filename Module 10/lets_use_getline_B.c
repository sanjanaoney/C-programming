#include<stdio.h>
int main()
{
char S[1000001];
//scanf("%s",S);
gets(S);
//fgets(S,1000001,stdin);
int i;
for(i=0;S[i]!='\\';i++)
{
printf("%c",S[i]);
}


    return 0;
}