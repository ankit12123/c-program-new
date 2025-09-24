# include<stdio.h>
int main(){
            // Declaring Variable  of 'r' is radius, 'v' is volume.
           float  r, v ,pi;

            // Taking Input
           printf("enter your radius:");
           scanf("%f", &r);
           pi=3.14;

            // Logic part
           v=(4*pi*r*r*r)/3;

           // Display Output
           printf("total volume is:" "%f", v);



}
