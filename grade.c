/*Complete Task
m>90:A
90>m>80:B
80>m>70:C
70>m>60:D
m<60:E*/
# include <stdio.h>
int main(){
            int m;

            printf("enter your number");
            scanf("%d",&m);

            if(m>=90){
                printf("Grade:-A");
            }
            else if(m<90 && m>=80){
                printf("Grade:-B");
            }
            else if(m<80 && m>=70){
                printf("Grade:-C");
            }
            else if(m<70 && m>=60){
                printf("Grade:-D");
            }
            else{
                printf("Grade:-E");
            }



}
