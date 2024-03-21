#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int values[23] = {
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
        16777216
        },
        answer, 

    powers[23] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 24, 32};
    long long maxValue = 4294967296;
    char mode, try;


    
   

    printf("Game mode (v/p): ");
    scanf("%c", &mode);
    while (mode != 'p' && mode != 'v'){ //mode != 'p' || mode != 'v'  ???
        printf("\nThe entered char is incorrect!");
        printf("\nGame mode (v/p): ");
        scanf("\n%c", &mode);
    }

    try = 0;
    if(mode == 'v') {
        while(1) { 
            if(try == 22) {
                printf("Do you want to play a supergame??? 1 = yes, any other char = no\n");
                scanf("%d", &answer);
                if (answer == 1) {
                    printf("\nwhat power is it %llu = ", maxValue);
                    scanf("%d", &answer);
                    if(answer == powers[try]) printf("That's right!\n");   
                    else printf("NO!!! It's %d\n", powers[try]);
                }
        
                try = 0;
            }
            
            printf("\nwhat power is it %d = ", values[try]);
            scanf("\n%d", &answer);
            if(answer == powers[try]) printf("That's right!\n");   
            else printf("NO!!! It's %d\n", powers[try]);  
            try++;
            
        } 
    }

    if(mode == 'p'){
        while(1){ 
            if(try == 22) {
                printf("22");
                printf("Do you want to play a supergame??? 1 = yes, any other char = no\n");
                scanf("%d", &answer);
                printf("answer = %d!!!!!!!!!!!!!!!", answer);
                if (answer == 1) {
                    printf("\nwhat power is it %d = ", powers[try]);
                    scanf("%d", &answer);
                    if(answer == powers[try]) printf("That's right!\n");   
                    else printf("NO!!! It's %d\n", maxValue);
                }
        
                try = 0;
            }
            else {
                printf("\nwhat value is it %d = ", powers[try]);
                scanf("%d", &answer);
                if(answer == values[try]) printf("That's right!\n");   
                else printf("NO!!! It's %d\n", values[try]);  
                printf("try = %d", try);
                try++;
            }
        } 
    }
    
    else{
        printf("\nSomething went wrong!");
    }
    return 0;
}