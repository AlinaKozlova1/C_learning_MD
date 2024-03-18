#include <stdio.h>
#include <stdlib.h>

int main() {
    int power;
    int specNum;
    int specNumsum = 0;
    int answer;
    

    printf("Enter a power of two: ");
    scanf("%d", &power);
    printf("Do you want to calculate the sum of values whose powers are multiples of a specific number? (1 = yes, 2 = no)\n Enter a number: ");
    scanf("%d", &answer);
    if (answer == 1){
        printf("Enter a specific number: ");
        scanf("%d", &specNum);
    }


    printf("\n--- for loop ---\n");
    int result = 2;
    if (answer == 1){
        for (int i = 2; i <= power; i++)
        {
            result = result * 2;
            printf("2^%d = %d\n", i, result);
            if(i%specNum == 0){
                specNumsum = specNumsum + result; 
            }
        }
    }

    else {
        for (int i = 2; i <= power; i++)
        {
            result = result * 2;
            printf("2^%d = %d\n", i, result);
        }
    }
    


    printf("\n--- while loop ---\n");
    result = 2;
    int whileCounter = 2;
    while(whileCounter <= power){
        result = result * 2;
        printf("2^%d = %d\n", whileCounter, result);
        whileCounter++;
    }


    printf("\n--- do while loop ---\n");
    result = 2;
    int doCounter = 2;
    do {
        result = result * 2;
        printf("2^%d = %d\n", doCounter, result);
        doCounter++;
    }
    while(doCounter <= power);

    if (answer == 1){
        printf("The sum whose powers are multiples of %d = %d", specNum, specNumsum);
    }

    return 0;
}