# include <stdio.h>
/* Genreal form
return_type function_name( parameter list ) {
   body of the function
}
*/


/* option1
void meow(){
    printf("meow\n");
}


int main(){
    int i;
    for (i = 0; i < 3; i++){
        meow();
    }
    return 0;
}
*/

// option2, define a parameter for function meow
// this is how a header file looks like  
void meow(int num){
    int i;
    for (i = 0; i < num; i++){
    printf("meow\n");
    }
}

int main(){
    meow(10);
    return 0;
}
    