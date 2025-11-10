#include <stdio.h>
int main(){
        // Variable Declare
        int s1,s2,s3;

        //Taking Input
        printf("enter your sides:");
        scanf("%d%d%d", &s1,&s2,&s3);

        //Calculation Part
        if(s1==s2 && s2==s3){
            printf(" The Triangle is Equilateral Triangle");
        }
        else if(s1==s2 || s2==s3){
            printf(" The triangle is Isosceles Triangle");
        }
        else {
            printf(" The triangle is Scalene Triangle ");
        }

}
