#include <stdio.h>
int main()
{
    int n = 0;
    int arr[10] = {1, 11, 22, 14, 64, 99, 73, 32, 98, 70};
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            n = i + 1;
        }
    }
    printf("The peak element is %d at index %d", max, n);
    return 0;
}