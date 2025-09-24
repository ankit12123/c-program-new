#include <stdio.h>
int main(){
            // declaring variable 'b' is basic salary, 'da' is Dearness Allowance, 'r' is House rent allowance, 'gs' is gross salary.
            int b;
            int da;
            int r;
            int gs;

            // Taking Input
            printf("enter your basic salary:");
            scanf("%d",&b);

            // Calculation part.
            da=b*40/100;

            r=b*20/100;

            gs=b+da+r;

            // Display Output
            printf("Total gross salary: " "%d", gs);



}
