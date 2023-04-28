#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int count=0;
    for (int i = 0; i < N; i++) 
    {
        if (A[i] == X) 
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}