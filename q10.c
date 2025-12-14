#include<stdio.h>
int main()
{
    int i = 0, n = 0, n1 = 0;
    int marks[20] = {76,81,99,90,67,88,79,99,96,92,89,90,92,83,76,87,84,99,91,80};
    for(i=0;i<20;i++)
    {
        n++;
        if(marks[i] == 99)
        {
            printf("student at array index %d scored 99 marks.\n", n);
            n1++;
        }
    }
    printf("The amount of students that scored 99 marks are: %d", n1);
    return 0;
}