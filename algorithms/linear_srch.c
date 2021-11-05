/* there's no true or false in c,
you either use the following example 
for that or you use 1 and 0 to represent the true or false

1. 
#define BOOL int
#define TRUE 1
#define FALSE 0

2. enum
typedef enum
{
    true=1, false=0
}bool;
*/

#include <stdio.h>

int main(void){
    int a[25];
    int target;
    size_t n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++){
        a[i] = i;
    }
    printf("Enter an integer to see if it's in a sized 25 array: ");
    scanf("%d", &target); 

    for (int j = 0; j < n; j++){
         // &target gets the address of target, and the value entered by the user is stored in that target.
        if (a[j] == target){
            printf("Found the number: %i\n", a[j]);
            return 0;
        }    
    }
    printf("Target not found"); 
    return 1;
}

