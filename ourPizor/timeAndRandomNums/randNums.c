#include <stdlib.h>
#include <stdio.h>  
#include <time.h>
#define SIZE 10


void findMaxMin(int *arr)
{
    int minNum = arr[0];
    int maxNum = arr[0];
    int prevMaxNum = arr[0];
    int prevMinNum = arr[0];

    for (int i = 0; i < SIZE; i++) // поч 0ой эл == 0? 
    {
        if (arr[i] < minNum) minNum = arr[i];
        if (arr[i] > maxNum) maxNum = arr[i];
    }
    printf("min number = %d\n", minNum);
    printf("max number = %d\n", maxNum);

    for (int i = 0; i < SIZE; i++) 
    {
        if (arr[i] < prevMinNum && arr[i] != minNum) prevMinNum = arr[i]; //если первое знач == max/min number, всё ломается
        if (arr[i] > prevMaxNum && arr[i] != maxNum) prevMaxNum = arr[i]; // можно искать значения через сортировку
        //либо можно присвоить prevMinNum и prevMaxNum максимальное и минимальное значение из всего диапазона соответственно
    }
    printf("previos min number = %d\n", prevMinNum);
    printf("previos max number = %d\n", prevMaxNum);
}

void printArray(int *arr)
{
    printf("[");
    for (int i = 0; i < SIZE; i++, printf("%d ", arr[i]));
    printf("]\n");
}

void fillArray(int *arr)
{
    printf("--- filled array ---\n");
    srand(time(NULL));   //ПОЧЕМУ ЭЛЕМЕНТЫ МАССИВА НАЧИНАЮТ СЧИТАТЬСЯ С 1
    for (int i = 0; i <= SIZE; i++) arr[i] = rand()%100 + 1; // от полученного значения вычитаем второе число; Можно менять местами, чтобы последовательность выполнения команд была нужной
    printArray(arr);                                                          
}


void sortArray(int *arr){
    printf("--- sorted array ---\n");
    printf("- from low to high value -\n");
    for (int i = 0; i < SIZE-1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
            
        }
        
    }
    printArray(arr);

    printf("- from high to low value -\n");
    for (int i = 0; i < SIZE/2; i++) 
    {
        arr[i] += arr[SIZE-i];
        arr[SIZE-i] = arr[i] - arr[SIZE-i];
        arr[i] = arr[i] - arr[SIZE-i];
    }
    printArray(arr);  
}

int main()
{
    printf("\n\n");
    double mesureTimeRes, temp;
    time_t start, end;
    start = time(NULL); 
    temp = difftime(start, 5);

    int array[SIZE];
    fillArray(array);
    findMaxMin(array);
    sortArray(array);
    
    printf("\n\nTime spent on the programm: %ld ms", clock()); //поменяла функцию, измеряющую
}
