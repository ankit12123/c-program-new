#include<stdio.h>
int main(){
        // Variable Declaring
        int n;

        // Taking Input
        printf("Enter the Number 1 to 12 : ");
        scanf("%d",&n);

        // Calculations
        if(n==1){
            printf("January has 31 Days. ");
        }
        else if(n==2){
            printf(" February has 28 and 29 days.");
        }
        else if(n==3){
            printf("March has 31 days.");
        }
        else if (n==4){
            printf("April has 30 days.");
        }
        else if(n==5){
            printf("May has 31 days.");
        }
        else if(n==6){
            printf("June has 30 days");
        }
        else if(n==7){
            printf("July has 31 days.");
        }
        else if(n==8){
            printf("August has 31 days.");
        }
        else if(n==9){
            printf("September ha 30 days.");
        }
        else if(n==10){
            printf("October has 31 days");
        }
        else if(n==11){
            printf("November has 30 days");
        }
        else if(n==12){
            printf("December has 31 days.");
        }
        else{
            printf("Invalid Month Number");
        }

}
