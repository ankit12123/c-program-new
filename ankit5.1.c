#include<stdio.h>
int main(){
        // Variable declaring
        char ch;

        // taking Input
        printf("Enter special character:");
        scanf("%c",&ch);

        // Calculations and logical Part
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
            printf("The Character is an Alphabet.");
        }
        else if(ch>='0' && ch<='9'){
            printf("The Character is a digit.");
        }
        else{
            printf("The Character is a Special Character.");
        }


}
