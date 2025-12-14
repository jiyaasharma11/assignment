
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = {14, 89, 7, 90, 91, 63, 72, 54, 97, 1};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nThe maximum digit in the above array is %d", max);
    printf("\nAnd the minimun digit is %d", min);
    return 0;
}
