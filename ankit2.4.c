#include <stdio.h>
int main(){

    // variable declaring
        int totalmin;
        int hrs;
        int min;

    // taking input
        printf("enter your total minutes: ");
        scanf("%d",&totalmin);

    //logic
        hrs=totalmin/60;
        min=(totalmin%60);

    //display output
        printf("%d hours , ",hrs);
        printf("%d minutes", min);


}
