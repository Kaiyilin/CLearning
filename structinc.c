/*
Imagine you have a phone book, 
you'd like to link the people's name & their phone #
you can use self-defined data structure

in C that we can define our own data type, or data structure. 
It would be a better design for our program to have some array with a data type person 
that includes both their name and phone number, so we can just say person people[]


But C do not have string by default,

Better check this 
https://stackoverflow.com/questions/10162152/how-to-work-with-string-fields-in-a-c-struct


Note that C is not an OOP language, the object in OOP language
can store both data and function 
but the struct here only with data

Can I self-define 2 different data types in same code??  
*/

# include <stdio.h>
# include <string.h>

typedef struct{
    char *name;
    char *number;
} person;



int main(void){
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++){
        if (strcmp(people[i].name, "David") == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}

/*
// another example of struct

typedef struct pixel{
    int red;
    int green;
    int blue;
} pixel;
*/
