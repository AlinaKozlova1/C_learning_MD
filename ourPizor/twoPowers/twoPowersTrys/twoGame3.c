#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    unsigned long long values[23] = {
        1, 
        2, 
        4, 
        8,
        16,
        32,
        64,
        128,
        256,
        512,
        1024,
        2048,
        4096,
        8192,
        16384,
        32768,
        65536,
        131072,
        262144,
        524288,
        1048576,
        16777216,
        4294967296
        },
        answer, 

    powers[23] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 24, 32};
    char mode, try;

    
   

    printf("Game mode (v/p): ");
    scanf("%c", &mode);
    while (mode != 'p' && mode != 'v'){ //mode != 'p' || mode != 'v'  ???
        printf("\nThe entered char is incorrect!");
        printf("\nGame mode (v/p): ");
        scanf("\n%c", &mode);
    }

    try = 0;
    if(mode == 'v'){
        while(1){ 
            if(try == 23) try = 0;
            printf("\nwhat power is it %llu = ", values[try]);
            scanf("\n%llu", &answer);
            if(answer == powers[try]) printf("That's right!\n");   
            else printf("NO!!! It's %llu\n", powers[try]);  
            try++;
        } 
    }

    if(mode == 'p'){
        while(1){ 
            if(try == 23) try = 0;
            printf("\nwhat value is it %llu = ", powers[try]);
            scanf("%llu", &answer);
            if(answer == values[try]) printf("That's right!\n");   
            else printf("NO!!! It's %llu\n", values[try]);  
            try++;
        } 
    }
    
    else{
        printf("\nSomething went wrong!");
    }
    return 0;
}