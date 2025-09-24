#include <stdio.h>
int main(){
          //declaring variable.
         int x;
         int y;

            // Taking Input of 'x' and 'y'.
         printf("Enter the value of x");
         scanf("%d",&x);
         printf("Enter the value of y");
         scanf("%d",&y);

            //calculations and logical part
         if (x>0 && y>0){
            printf("  The point  (%d,%d)  lies in Quadrant I." ,x,y);
         }
         else if(x<0 && y>0){
            printf("The point (%d,%d) lies in Quadrant II." ,x,y);
         }
         else if(x<0 && y<0){
            printf("The point (%d,%d) lies in Quadrant III.",x,y);
         }
         else if(x>0 && y<0){
            printf("The point (%d,%d) lies in Quadrant IV.",x,y);
         }
         else{
            printf("The point (%d,%d) lies in Quadrant V.",x,y);
         }

}
