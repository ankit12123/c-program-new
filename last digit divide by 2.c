/* WAP to check whether the last digit entered by the user is divisible by 2*/
#include <stdio.h>
int main(){
            int n,r;

            printf("enter your number");
            scanf("%d",&n);

            r=n%10;

            if(r%2==0){
                printf("YES");
            }
            else{
                printf("NO");
            }




}
