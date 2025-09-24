/*WAP to check whether the last digit entered by the user is 5 or not?*/
#include<stdio.h>
int main(){
            int n;
            int r;

            printf("enter your number");
            scanf("%d",&n);

            r=n%10;

            if(r==5){
                printf("Yes last digit is 5");
            }
            else{
                printf("NO last digit is not 5");
            }




}
