#include <stdio.h>

int main(void){
    int myvar = 5;
    int myvar_2 = myvar;
    int *p = &myvar; // pointer p point to the address of myvar
    int *p2 = &myvar_2; // pointer p2 point to the address of myvar_2, notice that even myvar == myvar_2, they are not in the same memory location
    char *s = "Hello World";

    printf("%p\n", p);
    printf("%p\n", p2);
    printf("%s\n", s); // the s point to the very first character of a string, 
                       //combine with the null character in the end, you can easi;y have a string
    return 0;
}