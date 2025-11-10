#include<stdio.h>
int main(){
        // variable declaring
        int circle,rectangle,triangle;
        float radius ,pi,Area;
        float length,width;
        float base,height;
        int choice ;

        printf("Choose your Shape \n");
        printf("1 circle \n");
        printf("2 rectangle \n ");
        printf("3  Triangle \n" );


        printf("Enter your Choice ");
        scanf("%d", &choice);




        if(choice==1){
            printf("Enter the radius:");
            scanf("%f",&radius);

            pi=3.1415;
            Area=pi*radius*radius;
            printf("Area of Circle is %f", Area);
        }
        else if(choice==2){
            printf("Enter length and width: ");
            scanf("%f""%f",&length,&width);

            Area=length*width;
            printf("Area of rectangle is %f", Area);

        }
        else if(choice==3){
            printf("Enter the base and height:");
            scanf("%f""%f", &base, & height);

            Area=0.5*base*height;
            printf("Area of triangle is %f", Area);

        }
        else{
            printf("Invalid shape you Choose");
        }
}
