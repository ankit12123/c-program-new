/* Program by using of nested if when n is divisible by 3 or 7*/
#include <stdio.h>
int main(){
            int n;

            printf("Enter your number:");
            scanf("%d",&n);

            if (n%3==0){
                if(n%7==0){
                    printf("Divisible by both 3 and 7");
                }
            }
            else {
                printf("Not Divisible by both 3 and 7");


            }

}
