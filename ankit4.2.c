
 #include<stdio.h>
 int main(){
        //variable declaration
           int roll,m,p,c,tm;
           float per;
           char n[50];

           // taking Input
            printf("Enter your roll number: ");
            scanf("%d",&roll);
            printf("  Enter Name: ");
            scanf("%s",&n);

           printf(" \n Enter your marks of three subjects : ") ;
           scanf("%d%d%d",&m,&p,&c);

            // Calculations and logical part
        if(m<=100 && p<=100 && c<=100){
           tm=m+p+c;
           per=tm/3;

           printf(" \n Roll number: %d",roll);
           printf(" \n Name : %s",n);
           printf(" \n your Total Marks is: %d",tm);
           printf(" \n your Percentage is: %.2f%% ",per);


                if(per>=60){
                    printf("\n Division : First ");
                   }
                   else if (per>=50 && per<60){
                    printf("\n Division :  Second ");
                   }
                   else if(per>=40 && per<50){
                    printf(" \n Division : Third ");
                   }
                   else{
                    printf("\n  Division : Fail");
                   }
                }
        else{
            printf(" \n Invalid marks");
           }



 }
