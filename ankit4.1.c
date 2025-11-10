#include <stdio.h>
#include <math.h>
int  main(){
            // Declaring Variable
            float  a,b,c,D ;
            float Q;
            float root1,root2;


            // taking input
            printf("Enter your three numbers:");
            scanf("%f%f%f",&a,&b,&c);


            // Calculations and logical part

            D=b*b-(4*a*c);
            printf("Value of Discriminant %f \n ",D);


            if(D>0){

                   root1=(-b + sqrt(D))/(2*a) ;
                   root2=(-b - sqrt(D))/(2*a) ;
                printf("Roots are real and Distinct: %.2f and %.2f",root1,root2);
            }

            else if(D==0){
                   root1=(-b + sqrt(D))/(2*a) ;
                   root2=(-b - sqrt(D))/(2*a) ;
                printf("Roots are real and equal: %.2f and %.2f",root1,root2);
            }
            else{
                 root1=(-b + sqrt(D))/(2*a) ;
                 root2=(-b - sqrt(D))/(2*a) ;
                printf("Roots are Imaginary: %.2f and %.2f" ,root1,root2);
            }



}
