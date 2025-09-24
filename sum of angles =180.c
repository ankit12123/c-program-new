/* Take three angles of Triangle as input whose sum is 180*/
#include<stdio.h>
int main(){
            int a;
            int b;
            int c;

            printf("enter value of Three sides of Triangle: ");
            scanf("%d%d%d", &a,&b,&c);

            if (a+b+c==180){
                printf("Valid Triangle");
            }
            else{
                printf("Not Valid Triangle");
            }


}
