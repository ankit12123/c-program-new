#include<stdio.h>
int main(){
          //declaring variable.
          int m;
          int n;

          // taking input of 'm'.
          printf("enter value");
          scanf("%d",&m);

            //calculations and logic part.
          if(m>0){

                n=1;//assigning the value in 'n' variable.
                printf("n is %d",n);

          }
          else if (m==0){

            n=0;
             printf("n is %d",n);
          }
          else{

            n=-1;
             printf("n is %d",n);
          }

}
