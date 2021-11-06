
/* Hiding numbers in your code is not a good habit, 
better use variables to replace those numbers.
in C you can use #define to define symbolic constant
not that the symbolic constant can be any char, not restricted to numbers */

#include <stdio.h>

#define LOWER 0 // lower limit of the table 
#define UPPER 300 // upper limit of the table
#define STEP 20 // step size

int main(){
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}
