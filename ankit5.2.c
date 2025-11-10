#include<stdio.h>
int main(){
        // Variable declaring
        char ch;
        //Taking Input
        printf("Enter the  alphabet:");
        scanf("%c",&ch);

        // Convert Uppercase to Lowercase
        ch = tolower(ch);

        //Calculations and Logical Part
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){

            printf("The Alphabet is a Vowel.");
        }
        else{
            printf("The Alphabet is a Consonant.");
        }
}
