#include <stdio.h>
#include <stdlib.h>

#define ROWS 10  //обходим не работающую константу
#define CELLS 5

int main() {
    // const int ROWS = 10, CELLS = 5;  //ctrl + h, ctrl + alt + Enter
    char    array_1[ROWS][CELLS],
            array_2[ROWS][CELLS] = {     //не можем записывать переменные в качестве указания размера массива, НО define поправляет ситуацию в данном случае
                {'0', '0', '0', '0', '2'},
                {'0', '0', '0', '0', '4'},
                {'0', '0', '0', '0', '8'},
                {'0', '0', '0', '1', '6'},                    //вся память, которую мы вручную выделяем, должна быть заполнена
                {'0', '0', '0', '3', '2'},
                {'0', '0', '0', '6', '4'},                    //
                {'0', '0', '1', '2', '8'},
                {'0', '0', '2', '5', '6'},
                {'0', '0', '5', '1', '2'},
                {'0', '1', '0', '2', '4'}
            },
            inputNum[CELLS] = {'0', '0', '0', '0', '0'};


    // for (int i = 0; i < ROWS; i++)  //выводим матрицу
    // {
    //     for (int j = 0; j < CELLS; j++)
    //     {
    //         printf("%c ", array_1[i][j]);
    //     }
    //     printf("\n");   
    // }
     for (int i = 0; i < CELLS; i++) //вывод изначального inputNum
    {
        printf("%c,", inputNum[i]);
    }

    // for (int i = 0; i < ROWS ; i++) //вывод array_2
    // {
    //    for (int j = 0; j < CELLS; j++)
    //    {
    //         printf("%c ", array_2[i][j]);
    //    }
    //    printf("\n");
    // }
    
    printf("Enter a number ");
    for (int i = 0; i <= CELLS; i++) // полностью перезаписывает массив
    {
        scanf("%c", &inputNum[i]);
        
    }

    for (int i = 0; i < CELLS; i++) //вывод введенго значения
    {
        printf("%c ", inputNum[i]);
    }

    {

    }


       
}