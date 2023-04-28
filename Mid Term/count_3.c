#include <stdio.h>
int main() 
{
    char S[1001];
    int i;
    scanf("%s", S);
    char N;
    for ( N = 'a'; N <= 'z'; N++) 
   {
       int count = 0;
        for (i = 0; S[i] != '\0'; i++) 
        {
            if (S[i] == N) 
            {
                count++;
            }
        }
       printf("%c - %d\n", N, count);
    }
    return 0;
}