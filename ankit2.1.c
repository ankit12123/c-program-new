#include <stdio.h>
int main(){
            // Declaring Variable 'c' is centigrade and 'f' is fahrenheit.
            float c;
            float f;

            // Taking Input of centigrade.
            printf("enter your temp in centigrade:");
            scanf("%f", &c);

            // Calculation Part
            f=(9*c)/5+32; // Formula to change centigrade to fahrenheit .

            // Display  Output
            printf("your temp in fahrenheit:" "%f", f);


}
