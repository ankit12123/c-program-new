# include<stdio.h>
int main(){
        // Variable declaring
        float unit, E_bill,surcharge , Total_Bill;
        int customerId;
        char name[30];;

        //Taking Input
        printf("Enter Customer id:");
        scanf("%d", &customerId);

        printf("Enter your Name:");
        scanf("%s",&name);

        printf("Enter your Total Unit:");
        scanf("%f", &unit);

        // Calculations and Logical part


            if(unit>=0 && unit<200){
                E_bill=(unit*1.20);
            }
            else if(unit>=200 && unit<400){
                E_bill= 199*1.20 + (unit-199)*1.50;
            }
            else if(unit>=400 && unit<600){
                E_bill=199*1.20 + 200*1.50 + (unit-399)*1.80;
                surcharge= (E_bill*15)/100;
                Total_Bill= E_bill + surcharge;
            }
            else if(unit>=600){
               E_bill=199*1.20 + 200*1.50 + 200*1.80 + (unit-599)*2.00;
               surcharge= (E_bill*15)/100;
               Total_Bill= E_bill+surcharge;
               }
            else{
            printf("Invalid \n ");
           }
            // Result

        printf("bill=%f", E_bill);
        printf(" \n Surcharge = %f", surcharge);
        printf(" \n Total_Bill = %f", Total_Bill);



}
