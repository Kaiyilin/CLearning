// For loop tutorial

# include <stdio.h>

// for containing 3 expression
// expr1 : fahr=0 the initial condition
// expr2 : fahr <= 300, the condition, if this is true
// excute the operation sequence
// expr3: fahr = fahr+10 is the next expression-1

// for (expr1; expr-2; expr-3)

int main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 10)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}