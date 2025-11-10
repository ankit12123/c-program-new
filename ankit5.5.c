#include<stdio.h>
int main(){
        // variable declaring
        char grade;

        // Taking input
        printf("Enter the Grade");
        scanf("%c", &grade);

        // calculations
        if(grade=='E' || grade=='e'){
            printf("Excellent");
        }
        else if(grade=='V' || grade=='v'){
            printf("Very Good");
        }
        else if(grade=='G' || grade=='g'){
            printf("Good");
        }
        else if(grade=='A' || grade=='a'){
            printf("Average");
        }
        else if(grade=='F' || grade=='f'){
            printf("Fail");
        }
        else{
            printf("Invalid Grade Entered.");
        }

}
