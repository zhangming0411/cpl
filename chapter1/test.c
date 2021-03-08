#include <stdio.h>
#include <stdlib.h>

#define LEN 10

char array[LEN];

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < LEN; i++) {
        array[i] = '=';
    }
    array[i] = '\0';
    printf("%s\n", array);
}