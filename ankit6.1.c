#include <stdio.h>
int main(){
        // Variable Declaration
        int n;
        // Taking Input
        printf("Enter Any Number");
        scanf("%d",&n);


        //Calculations and Logical Part
            if(n==1){
                printf("Sunday");
            }
            else if(n==2){
                printf("Monday");
            }
            else if(n==3){
                printf("Tuesdsay");
            }
            else if(n==4){
                printf("Wednesday");
            }
            else if(n==5){
                printf("Thursday");
            }
            else if(n==6){
                printf("Friday");
            }
            else if(n==7) {
                printf("Saturday");
            }
            else{
            printf("Invalid day Number");
        }

}
