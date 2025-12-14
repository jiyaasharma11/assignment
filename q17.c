
#include<stdio.h>
int main()
{
    int num;
    printf("\nenter the number of elements in the array:");
    scanf("%d",&num);
    int i ,arr[num+1];
    for(i=0;i<num;i++)
    {
        printf("enter the %d value:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nthe original array is:\n");
    for(i=0;i<num;i++)
    {
        printf("%d,",arr[i]);
    }
    int choice;
    printf("\nENTER FOR DELETION:1-FROM THE FRONT\n2- FROM THE MIDDLE\n3- FROM THE END\n enter your choice: ");
    scanf("%d",&choice);
    int pos,flag=1;
    switch(choice)
    {
        case 1:{pos=0;
            break;}
        case 2: {pos=num/2;
            break;}
        case 3 :{pos=num;
        break;}
        default:{printf("\nyou entered the wrong choice\n");
            flag=0;
            break;}
    }
  
    if(flag)
    {
        for(i=pos;i<num;i++)
        {
            arr[i]=arr[i+1];
        }
        num--;
       
        printf("THE NEW ARRAY AFTER DELETION IS:\n");
        for(i=0;i<num;i++)
        {
            printf("%d,",arr[i]);
        }
    }
    else{
        printf("the operation cant be done becuase the choice made is wrong\n");
    }
    return 0;
}