#include <stdio.h>

// the perfect exaple to illustrate the
// beauty of pointers, you can actully define
typedef char *string;

int main(void){
    char *s = "hello";
    string f = "This is terrific";

    printf("%s\n", s); // the s point to the very first character of a string, 
                       //combine with the null character in the end, you can easi;y have a string
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%p\n", &s[5]);
    printf(f);
    return 0;
}