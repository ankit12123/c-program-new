#include<stdio.h>
int main(){
        // Variable declaring
        int a1, a2, a3, sum;

        //Taking Input
        printf("Enter your Angles:");
        scanf("%d%d%d",&a1, &a2, &a3);

        // Calculation Part
        sum=a1+a2+a3;
        printf("the sum of three angle is : %d", sum);

        if(sum==180){
            printf("\n The triangle is Valid.");
        }
        else{
            printf("\n The Triangle is Not Valid.");
        }

}
