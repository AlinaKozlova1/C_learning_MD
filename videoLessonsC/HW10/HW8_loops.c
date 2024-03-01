#include <stdio.h>
#include <stdlib.h>

void forLoop(int number){
    printf("\n--- for loop ---");
        for (int i = 2; i <= number; i+=2)
    {
        printf("\n%d", i);
    }
    
}

void doWhileLoop(int number){
    printf("\n--- do while loop ---");
    int i = 2;
    if (number>1){
        do{
            printf("\n%d", i);
            i+=2;
        }
        while(i<=number);
    }
}

void whileLoop(int number){
    printf("\n--- do while loop ---");
    int i = 2;
    if (number>1){
        while(i<=number){
            printf("\n%d", i);
            i+=2;
        }
    }

}


int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    forLoop(num);
    doWhileLoop(num);
    whileLoop(num);


    
    return num;
}

