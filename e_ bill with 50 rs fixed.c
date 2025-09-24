/*electricity bill:-
units       rate
<200        2 rs
201-300     4 rs
301-400     5 rs
>400        7 rs
by govt a fixed 50 rs added in your bill compulsory*/
#include<stdio.h>
int main(){
            int u;
            int bill;

            printf("Enter your units:");
            scanf("%d",&u);

            if (u<=200){
                bill=u*2 +50;
            }
            else if(u>200 && u<=300){
                bill=200*2+(u-200)*4 +50;
            }
            else if(u>300 && u<=400){
                bill=200*2+100*4+(u-300)*5+50;
            }
            else{
                bill=200*2+100*4+100*5+(u-400)*7+50;
            }
            printf("Your Total Bill is:-" "%d", bill);




}

