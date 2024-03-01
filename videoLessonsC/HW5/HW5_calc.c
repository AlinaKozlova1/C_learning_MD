#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float x, y, res;
    int oper;
    
    printf("Input x = ");
    scanf("%f", &x);
    printf("Operations:\n1 = *\n2 = /\n3 = +\n4 = -\nSelect a number: ");
    scanf("%d", &oper);
    printf("you choose %d\n", oper);
    printf("Input y = ");
    scanf("%f", &y);
    if (oper == 1){
        res = x*y;
        printf ("%f * %f = %f", x, y, res);
        return res;
    }
    else if (oper == 2)
    {
        res = x/y;
        printf ("%f * %f = %f", x, y, res);
        return res;
    }
    else if (oper == 3)
    {
        res = x+y;
        printf ("%f * %f = %f", x, y, res);
        return res;
    }
    else if (oper == 4)
    {
        res = x-y;
        printf ("%f * %f = %f", x, y, res);
        return res;
    }
    else
    {
        printf ("Something went wrong.");
        return 0;
    }
    return 0;
}