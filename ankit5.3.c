#include<stdio.h>
int main(){
            // Variable Declaring
            float cp, sp, diffrence,profit,loss;

            //Taking Input
            printf("enter your cost price and selling price:");
            scanf("%f%f",&cp,&sp);

            // Logical Part
            diffrence=sp-cp;
            printf("difference between sp and cp is : %.2f \n ", diffrence);
            profit=sp-cp;
            loss=cp-sp;

            if(sp>cp){
                printf("Profit: %.2f", profit);
            }
            else if(sp<cp){
                printf("Loss: %.2f", loss);
            }
            else{
                printf("No profit, no loss.");
            }

}
