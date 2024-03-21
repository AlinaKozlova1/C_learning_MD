#include <stdlib.h>
#include <stdio.h> 

void readFile(char *fileName){
    // char temp = fileName;

    FILE * fp = fopen(fileName, "r"); //fp == door
        if(fp) {
            char c = getc(fp);
            while(c != EOF)
            {
                printf("%c", c);
                c = getc(fp);
            }
        }
    fclose(fp);
}

void addToFile(char *text, char *fileName, int messageSize) {
    // int allArrSize = sizeof(text)*2; // уменьшил размер строки в 2 раза; или даже всегда равен 8
    // printf("1 - %d\n", allArrSize);  // измеряем количество элементов массива с пом. деления всего размера массива на размер одного элемента (16 байт / 1 байт = 16 элементов)
    // int firstCharSize = sizeof(text[0]); 
    // printf("2 - %d\n", firstCharSize);
    // int messSize = allArrSize/firstCharSize;
    // printf("3 - %d\n", messSize);


    FILE * fp = fopen(fileName, "a+");
    if(fp){
        for (int i = 0; i < messageSize; i++)
        {
            putc(text[i], fp);
        }
        
        fclose(fp);
    }

}

int main() {
    char *fname = "crazyCat.txt";
    char message[] = " He hates drugs.";
    int allArrSize = sizeof(message); 
    printf("1 - %d\n", allArrSize);
    int firstCharSize = sizeof(message[0]);
    int messSize = allArrSize/firstCharSize;
    // printf("3 - %d\n", messSize);

    readFile(fname);
    printf("\n");
    addToFile(message, fname, messSize);
    readFile(fname);
    
}