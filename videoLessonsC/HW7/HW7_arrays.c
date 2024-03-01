#include <stdio.h>
#include <stdlib.h>
// переписать без функций
int[] fillArr(int arr[], int arrSize)
{
    int i = 0;
    while (i<arrSize)
    {
        arr[i] = 7;
        i++; 
    }
    return arr; 
}

void printArr(int arr[], int arrSize)
{
    for (size_t i = 0; i < arrSize; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i])
    }
    
}

int main()
{
    int arraySize = 10;
    int arr[arraySize];
    int filledArray[arraySize] = fillArr(arr, arraySize);
    PrintArr(filledArray, arraySize);
    return 0;
}
