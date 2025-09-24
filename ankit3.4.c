#include <stdio.h>
int main(){
        // declaring variable of 'a' & 'b' & 'c'.
        int a,b,c;

        // Taking input of 3 Numbers.
        printf("enter your three numbers:");
        scanf("%d%d%d",&a,&b,&c);

        // Calculations and Logical part.
        if(a>b && a>c){

                printf("The largest number is %d",a);

        }

        else if(b>a && b>c){

                printf("The largest number is %d",b);


        }
        else if(c>a && c>b){

                printf("The largest number is %d",c);
            }
            else{
                printf("The Numbers are equal to each other ");
            }

}
