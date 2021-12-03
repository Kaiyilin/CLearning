#include <stdio.h>

int main(void){
    int n = 50;
    int m = 40;
    int *p = &n; //the * sign tells the computer this is address of somthing
    // int *q = m; this syntax will cause error in C, it cannot initialize a variable of type 'int *' with an lvalue of type 'int'

    printf("%p\n", p); // return the address
    printf("%p\n", &n); // this also returns the address, you don't have to store it in the variable all the time
    //printf("%p", q);
    printf("%i\n", *p); // return 50, when you want print out sthg in that address 

}