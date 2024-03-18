// 1. Для типов данных char, short, int, long с квалификаторами signed, unsigned составить 
// программу, которая, используя операцию присваивания, выполняет указанные преобразования 
// типов, и вывести полученные результаты.

#include <stdio.h>
#include <stdlib.h>

void convertSignedChar(signed char number) {
    printf("\nsigned char --> signed short int --> signed int --> signed long\n");
    printf("signed char number = %d\n", number);
    signed short number_1 = number;
    printf("signed short number_1 = %d\n", number_1);
    signed int number_2 = number_1;
    printf("signed int number_2 = %d\n", number_2);
    signed long number_3 = number_2;
    printf("signed long number_3 = %ld\n", number_3);

}

void convertUnsignedChar(unsigned char number) {
    printf("\nunsigned char --> unsigned short int --> unsigned int --> unsigned long\n");
    printf("unsigned char number = %u\n", number);
    unsigned short number_1 = number;
    printf("unsigned short number_1 = %u\n", number_1);
    unsigned int number_2 = number_1;
    printf("unsigned int number_2 = %u\n", number_2);
    unsigned long number_3 = number_2;
    printf("unsigned long number_3 = %ld\n", number_3);
}

void convertUnsignedLong(unsigned long number) {
    printf("\nunsigned long --> unsigned int --> unsigned short int --> unsigned char\n");
    printf("unsigned long number = %lu\n", number);
    unsigned int number_1 = number;
    printf("unsigned int number_1 = %u\n", number_1);
    unsigned short number_2 = number_1;
    printf("unsigned short number_2 = %u\n", number_2);
    unsigned char number_3 = number_2;
    printf("unsigned char number_3 = %u\n", number_3);
}

void convertSignedLong(signed long number) {
    printf("\nsigned long --> signed int --> signed short int --> signed char\n");
    printf("signed long number = %ld\n", number);
    signed int number_1 = number;
    printf("signed long number_1 = %d\n", number_1);
    signed short number_2 = number_1;
    printf("signed short number_2 = %d\n", number_2);
    signed char number_3 = number_2;
    printf("signed char number_3 = %d\n", number_3);

}

// 2. Выполнить указанные вычисления и распечатать полученные результаты.

int main(){
// Задание 1.
    printf("\t----------- Exercise 1 -----------\n");
    convertSignedChar(CHAR_MAX);
    convertUnsignedChar(UCHAR_MAX);
    convertSignedLong(LONG_MAX);
    convertUnsignedLong(ULONG_MAX);

    convertSignedChar(CHAR_MIN);
    convertUnsignedChar(CHAR_MIN);
    convertSignedLong(LONG_MIN);
    convertUnsignedLong(LONG_MIN);

// Задание 2.
    printf("\n\t----------- Exercise 2 -----------\n");
    printf("\nsigned int MAX = %d, signed int MAX+1 = %d", INT_MAX, INT_MAX+1);
    printf("\nunsigned int MAX = %d, unsigned int MAX+1 = %d", UINT_MAX, UINT_MAX+1);
    printf("\nsigned int MIN = %d, signed int MIN-1 = %d", INT_MIN, INT_MIN-1);

    return 0;
}