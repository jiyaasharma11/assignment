
#include <stdio.h>
int main()
{
    int i;
    int arr[5];
    for(i = 0; i < 5; i++)
    {
        printf("Enter digit for index %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp = arr[4]; 
    for(i = 4; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp; 
    printf("The new array is: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
