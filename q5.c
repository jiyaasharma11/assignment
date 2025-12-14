#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0){
        printf("The coordinate exisits in the first quadrant");
    }
    else if(x < 0 && y > 0){
        printf("The coordinate exists in the second quadrant");
    }
    else if(x < 0 && y < 0){
        printf("The coordinate exists in the third quadrant");
    }
    else if(x > 0 && y < 0){
        printf("The coordinate exists in the fourth quadrant");
    }
    else if(x > 0 && y == 0 || x < 0 && y == 0){
        printf("The coordinate exists on the X axis");
    }
    else if(y > 0 && x == 0 || y < 0 && x == 0){
        printf("The coordinate exists on the Y axis");
    }
    else
        printf("The coordinate exists on the origin");
    return 0;
}