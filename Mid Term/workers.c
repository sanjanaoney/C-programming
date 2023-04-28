#include <stdio.h>
int main()
{
    int M1, M2, D;
    scanf("%d%d%d", &M1, &M2, &D);
    int D2 = (M1 * D) / M2;
    printf("%d", D2);
    return 0;
}