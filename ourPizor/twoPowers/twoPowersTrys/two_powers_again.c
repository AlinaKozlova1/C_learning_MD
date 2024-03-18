#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    // unsigned long long a;
    // printf("%llu", a);
    
    char values[23][10] = {
        {'1'},
        {'2'},
        {'4'},
        {'8'},
        {'1', '6'}, // lдописать дома
        {'3', '2'},      // реализовать вывод и сравнение
        {'6', '4'},      // сравнить количество потраченных байт
        {'1', '2', '8'},
        {'2', '5', '6'},
        {'5', '1', '2'},
        {'1', '0', '2', '4'},
        {'2', '0', '4', '8'},
        {'4', '0', '9', '6'},
        {'8', '1', '9', '2'},
        {'1', '6', '3', '8', '4'},
        {'3', '2', '7', '6', '8'},
        {'6', '5', '5', '3', '6'},
        {'1', '3', '1', '0', '7', '8'},
        {'2', '6', '2', '1', '4', '4'},
        {'5', '2', '4', '2', '8', '8'},
        {'1', '0', '4', '8', '5', '7', '6'},
        {'1', '6', '7', '7', '7', '2', '1', '6'},
        {'4', '2', '9', '4', '9', '6', '7', '2', '9', '6'}
    };

    // char powers[22][2] = {
    //     {'0'},
    //     {'1'},
    //     {'2'},
    //     {'3'},
    //     {'4'},
    //     {'5'},
    //     {'6'},
    //     {'7'},
    //     {'8'},
    //     {'9'},
    //     {'1', '0'},
    //     {'1', '1'},
    //     {'1', '2'},
    //     {'1', '3'},
    //     {'1', '4'},
    //     {'1', '5'},
    //     {'1', '6'},
    //     {'1', '7'},
    //     {'1', '8'},
    //     {'1', '9'},
    //     {'2', '0'},
    //     {'2', '4'},
    //     {'3', '2'}
    //     };
    char mode, try;
    unsigned long long longAnswer;
    char charAnswer[10];


    int checkAnswer(char orgValue[], char enteredValue[]) {
        if (sizeof(orgValue) != sizeof(enteredValue)) return 0; //не подсвечиваются значения sizeof
        for (int i = 0; i < (sizeof(orgValue)) ; i++)
        {
            if (orgValue[i] != enteredValue[i]) return 0;
        }

        return 1;     
    }

    void printArray (char arr[]) {
        for (int i = 0; i < sizeof(arr); i++)
        {
            printf("%c");
        }
    }

    printf("Game mode (v/p): ");
    scanf("%c", &mode);
    while (mode != 'p' && mode != 'v'){ //mode != 'p' || mode != 'v'  ???
        printf("\nThe entered char is incorrect!");
        printf("\nGame mode (v/p): ");
        scanf("\n%c", &mode);
    }

    try = 0;
    if(mode == 'p') {
        while(1){ 
            if(try == 23) try = 0;
            printf("\nwhat power is it");
            printArray(values[try]);
            printf(" = ");
            scanf("%llu", &longAnswer); 
            charAnswer = Integer.ToString(longAnswer).toCharArray(); // может не работать из-за long int
            int checkRes = checkAnswer(powers[try], charAnswer);
            if (checkRes == 1) printf("That's right!\n");   
            else printf("NO!!! It's ");
            printf(powers[try]);
        } 
    }

    if(mode == 'v') {
    while(1) { 
        if(try == 23) try = 0;
        printf("\nwhat value is it");
        printArray(powers[try]);
        printf(" = ");
        scanf("%llu", &longAnswer);
        charAnswer = Integer.ToString(longAnswer).toCharArray(); // может не работать из-за long int
        int checkRes = checkAnswer(values[try], charAnswer);
        if (checkRes == 1) printf("That's right!\n");       
        else printf("NO!!! It's ");
        printf(powers[try]);  
        try++;
        } 
    }
    
    else {
        printf("\nSomething went wrong!");
    }

    return 0;
}