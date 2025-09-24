/* Take three sides of triangle as input and check whether the triangle is Equilatoral,, isosceles and scalene.*/
#include <stdio.h>
int main(){
            int a,b,c;

            printf("Enter the all sides of triangle:");
            scanf("%d%d%d", &a,&b,&c);

            if(a==b && b==c){
                printf("Equilatoral Triangle");
                /* this if statement is also written as nested if form
                if(a==b){
                        if(b==c){
                    printf("Equilatoral Triangle");
                    }
                    }*/
            }
            else if (a==b || b==c ||a==c){
                printf("Isosceles Triangle");
                /* In or operator we do not use Nested if only nested if is written in and operator*/
            }
            else{
                printf("Scalene Triangle");
            }



}
