#include <stdio.h>
void temp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("A is %d and B is %d", a, b);
}
void no_temp(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("A is %d and B is %d", a, b);
}
void pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("A is %d and B is %d", *a, *b);
}
void xor(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("A is %d and B is %d", a, b);
}
int main()
{
    int no1, no2, x;
    printf("Enter no1 and no2:  ");
    scanf("%d %d", &no1, &no2);
    printf("Enter method no(1-temp)(2-no_temp)(3-pointer)(4-xor): ");
    scanf("%d", &x);
    switch (x)
    {
    case 1: temp(no1, no2); break;
    case 2: no_temp(no1, no2); break;
    case 3: pointer(&no1, &no2); break;
    case 4: xor(no1, no2); break;
    }
    printf("\nFinal values in main: no1 = %d, no2 = %d\n", no1, no2);
    return 0;
}