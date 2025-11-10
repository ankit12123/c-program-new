#include<stdio.h>
int main(){
        // Variable Declaring
        float centi;

        //Taking Input
        printf("temperature in centigrade:");
        scanf("%f",&centi);

        // Calculations
        if(centi<=0){
            printf("freezing weather");
        }
        else if(centi>0 && centi<=10){
            printf("Very cold weather");
        }
        else if(centi>10 && centi<=20){
            printf("Cold weather");
        }
        else if(centi>20 && centi<=30){
            printf("Normal in Temp ");
        }
        else if(centi>30 && centi<=40){
            printf("It's Hot");
        }
        else{
            printf("It's Very Hot");
        }

}
