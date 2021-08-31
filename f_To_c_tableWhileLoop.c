// Fahrenheit to Celcius table 

# include <stdio.h>

// Basic dtypes
// char, usually one byte
// short, 16 bit 
// long, 32 bit
// double, 64 bit


int main()
{
    float fahr, cel; // declare variable and data types
    int start_point, stepsize, endpoint; 
    start_point = 0;
    endpoint = 500;
    stepsize = 20;
    fahr = start_point;
    printf("\n\tFtoC Table\n\n");
    while(fahr <= endpoint){
        cel = 5*(fahr-32)/9;
        //printf("\tfahr\tcelcius\n"); 
        printf("%f\t%f\n", fahr, cel);
        fahr += stepsize;

    }
}

// (5/9)*(fahr-32) will generate certain issue, cuz in c 
// integer divided by integer will cause <truncate>, 
// it wil eliminate the remains thus becomes 0!
// you can fix that by using (5.0/9.0) instead

/*
while loop

while (condition){
    loop body, the execution sequences
}

*/

// 

/*
%c	a single character
%s	a string
%hi	short (signed)
%hu	short (unsigned)
%Lf	long double
%n	prints nothing
%d	a decimal integer (assumes base 10)
%i	a decimal integer (detects the base automatically)
%o	an octal (base 8) integer
%x	a hexadecimal (base 16) integer
%p	an address (or pointer)
%f	a floating point number for floats
%u	int unsigned decimal
%e	a floating point number in scientific notation
%E	a floating point number in scientific notation
%%	the % symbol

%6d  The width (here 6) specifies the minimum number of characters to be printed, this will print 6 blank block
%.2f a floating point number for floats with 2 decimals
%6.2f printed 6 blank block and the a floating point number for floats with 2 decimals

*/
