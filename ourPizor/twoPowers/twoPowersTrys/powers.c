#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
    unsigned long long a = 4294967296;


    int arrSize = 22;
    
    unsigned long long powers[arrSize];
    for (int i = 0; i <= arrSize; i++)
    {
        if(i == 21) {
            powers[i] = pow(2, 24); 
        }

        if (i == 22){
            powers[i] = pow(2, 32); 
        }

        else{
            powers[i] = pow(2, i);
        }

         printf("power[%d] = %d\n", i, powers[i]);
        
    }
    
    return 0;
}