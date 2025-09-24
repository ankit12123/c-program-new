#include <stdio.h>
int main (){

    //variable declaring
        int hrs;
        int min;
        int totalmin;

    // taking input
        printf("enter your hours: ");
        scanf("%d",&hrs);
        printf("enter your minutes: ");
        scanf("%d",&min);

    // logic
        totalmin= (hrs*60)+min;

    // display output
        printf("total minutes: " "%d" , totalmin);


}
