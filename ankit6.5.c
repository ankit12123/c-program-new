#include<stdio.h>
int main(){
        // Variable Declaring
        float select,a,b,sum,sub,product,div;

        printf("Addition or 1");
        printf("Subtraction or 2");
        printf("multiplication or 3");
        printf("division or 4");

        printf("Select Any One ");
        scanf("%f",&select);

        if( select==1){
            printf("Enter the two Number a and b ");
            scanf("%f%f",&a,&b);

            sum=a+b;
            printf("Sum=%f",sum);
        }
        else if( select==2){
            printf("Enter the two Number a and b");
            scanf("%f%f",&a,&b);

            sub=a-b;
            printf("Difference=%f",sub);
        }
        else if( select==3){
            printf("Enter the two Number a and b");
            scanf("%f%f",&a,&b);

            product=a*b;
            printf("Product=%f",product);

        }
        else if(select==4){
            printf("Enter the two Number a and b");
            scanf("%f%f",&a,&b);
            if(b==0){
                printf("Division by zero is not allowed.");
            }
            else{
            div=a/b;
            printf("Quotient=%f",div);
            }


        }
        else{
            printf("Not Possible");
        }

}
