/*ask a no from user and check whether the no is divisible by 3 or 7 both*/
#include <stdio.h>
int main(){
            int n;

            printf("enter your number");
            scanf("%d",&n);

            if(n%3==0 && n%7==0){
                printf("number is divisible");

            }
            else{
                printf("not divisible");
            }


}
