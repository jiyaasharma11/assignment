#include <stdio.h>
int main()
{
    int i = 0;
    int scores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even_array[10];
    int odd_array[10];
    printf("The even array is: ");
    for (int i = 0; i < 10; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[i] = scores[i];
            printf("%d ", even_array[i]);
        }
    }
    printf("\n");
    printf("The odd array is: ");
    for (int i = 0; i < 10; i++)
    {
        if (scores[i] % 2 != 0)
        {
            odd_array[i] = scores[i];
            printf("%d ", odd_array[i]);
        }
    }
    return 0;
}