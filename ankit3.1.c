#include<stdio.h>
int main()
{
    // Variable Declaring 'a' is denoted year;
    int a;
    // Take Input
    printf("enter  year");
    scanf("%d",&a);

    // Logic Applied
    if(a%4==0){

       if(a%100==0){

            if(a%400==0){
                printf(" %d is a Leap year");//using nested if all if condition are true then print leap year.
            }
            else{
               printf(" %d is Not a leap year");//a/4,,a/100 but 'a'is not divisible by 400 then print not leap year.
            }
        }
        else{
            printf(" %d is a leap year");//less than 400 then a/4 or a/100 any correct then print leap year.
        }

    }
    else{
    printf(" %d is Not a leap year");// 'a' is not divisible by 4 then print not leap year.
    }



}
