#include<stdio.h>

int main(){

    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if( (year%4 == 0 && year%100 != 0) || year%400 ==0 ){
        printf("%d Leap year", year);
    }else{
        printf("%d Not Leap Year", year);
    }

    return 0;
}
