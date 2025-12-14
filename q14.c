
#include <stdio.h>
int main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) 
    {
        int num = arr[i];
        int prime = 1;
        if (num <= 1) 
        {
            prime = 0;
        }
        for (int j = 2; j < num; j++) 
        {
            if (num % j == 0) 
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d is prime\n", num);
        else
            printf("%d is not prime\n", num);
    }
    return 0;
}
