/*electricity bill:-
units       rate
<200        2 rs
201-300     4 rs
301-400     5 rs
>400        7 rs
*/
#include<stdio.h>
int main(){
            int u;
            int bill;

            printf("enter your units");
            scanf("%d",&u);

            if(u<=200){
                bill=u*2;
            }
            else if(u>200 && u<=300){
                bill=200*2+(u-200)*4;
            }
            else if(u>300 && u<=400){
                bill=200*2+100*4+(u-300)*5;
            }
            else{
                bill=200*2+100*4+100*5+(u-400)*7;
            }
            printf("Your Total Electricity Bill is :-" "%d" ,bill);


}
