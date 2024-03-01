#include <stdio.h>
#include <stdlib.h>

//  EXERCISE 1
int lessTen(int x){
    if (x<10)
    {
        printf("\n---> %d <---", x);
        return x;
    }

    else
    {
        printf("\nError!");
        return 0;
    }
    
    return 0;
}

// EXERCISE 2
int checkArgs(int a, int b)
{
    if (a<b)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int arg1, arg2;
    printf("Enter the first number: ");
    scanf("%d", &arg1);
    printf("Enter the fsecond number: ");
    scanf("%d", &arg2);
    int result = lessTen(checkArgs(arg1, arg2));

    return result;
}
