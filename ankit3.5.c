#include <stdio.h>
int main(){
            // Declaring variable where 'm' is mathematics , 'p' is physics , 'c' is chemistry.
            int m;
            int p;
            int c;
            int totalmarks ,tmp;

            //Taking Input of all subjects.
            printf("Enter your Math marks:");
            scanf("%d",&m);

            printf("Enter your Physics marks:");
            scanf("%d",&p);

            printf("Enter your Chemistry marks:");
            scanf("%d",&c);

            // Calculation and logical part
            totalmarks=m+p+c;

            tmp=m+p;              // tmp means total marks of math and physics

            printf("Total marks of math, physics,chemistry is : %d \n" ,totalmarks);

            printf("  Total Marks of Math and physics is: %d \n " ,tmp );

            if(totalmarks>=190 || tmp>=140){

                    printf("The candidate is eligible. ");


            }
            else{
                printf("The candidate is not eligible.");
            }

}
