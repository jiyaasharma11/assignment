#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\t");
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}