/* check the no entered by user is even i.e (n)2 and odd i.e (n)3.*/
#include <stdio.h>
int main() {
            int n;
            int x;

            printf ("enter a number");
            scanf("%d",&n);

            if(n%2==0){
                x=n*n;
                printf("%d",x);

            }
            else{
                x=n*n*n;
                printf("%d",x);
            }


}
