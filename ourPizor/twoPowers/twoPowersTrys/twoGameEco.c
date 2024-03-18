#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    unsigned long values[23] = {
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
        4294967295
        },
        answer, 

    powers[23] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 24, 32};
    char mode, try;
   

    printf("Game mode (v/p): ");
    scanf("%c", &mode);
    // while (mode != 'v' || mode != 'p' ){
    //     printf("\nmode = %c", mode);
    //     printf("\nThe entered char is incorrect!");
    //     printf("\nGame mode (v/p): ");
    //     scanf("%c", &mode);
    // }

    try = 0;
    if(mode == 'v'){
        while(1){ 
            // if(try == 23) try = 0;
            if(try == 22) {
                printf("\nwhat value is it %llu = ", powers[try] + 1);
                scanf("%lu", &answer);
                if(answer == powers[try]) printf("That's right!\n");   
                else printf("NO!!! It's %lu\n", powers[try]);
                try = 0;
            }
            printf("\nwhat power is it %lu = ", values[try]);
            scanf("\n%lu", &answer);
            if(answer == powers[try]) printf("That's right!\n");   
            else printf("NO!!! It's %lu\n", powers[try]);  
            try++;
        } 
    }

    if(mode == 'p'){
        while(1){ 
            // if(try == 23) try = 0;
            // if(try == 22) {
            //     printf("\nwhat value is it %llu = ", powers[try] + 1);
            //     scanf("%lu", &answer);
            //     try = 0;
            // }
            printf("\nwhat value is it %lu = ", powers[try]);
            scanf("%lu", &answer);
            if(answer == values[try]) printf("That's right!\n");   
            else printf("NO!!! It's %lu\n", values[try]);  
            try++;
        } 
    }
    
    else{
        printf("\nSomething went wrong!");
    }
    return 0;
}