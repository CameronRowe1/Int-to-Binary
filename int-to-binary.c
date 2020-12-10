// int-to-binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printbits(int x) {
    for (int i = sizeof(x) << 3; i; i--) {
        putchar('0' + ((x >> (i-1)) &1 ));
    }
}


int main()
{
    int input;

    printf("inter an int: ");
    scanf("%d", &input);
    printbits(input);

    return 0;
}

