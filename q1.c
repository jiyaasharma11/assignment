#include<stdio.h>

int main(){
    int num, or, rem, sum = 0, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    or = num;
    temp = num;
    while (temp!=0){
    digits++;
    temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= rem;
        }
        sum += power;
        temp /= 10; 
    }
    if (sum == or)
    {
        printf("%d is armstrong number\n", or);
    }
    else 
        printf("%d is not an armstrong number", or);
    
    return 0;
}