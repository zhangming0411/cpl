#include <stdio.h>

#define IN 1
#define OUT 2
#define MAXWORDLEN 100

int main(int argc, char const *argv[])
{
    int i, c, state, len;
    int wordLenRecord[MAXWORDLEN];
    state = OUT;
    len = 0;
    for (i = 0; i < MAXWORDLEN; i++)
        wordLenRecord[i] = 0;  // init
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN && len > 0)
                wordLenRecord[len] += 1;
            state = OUT;
        }
        else if (state == OUT) {  // 初次进入 一个word 1 record 2 len=0
            state = IN;
            len = 0;
        }
        if (state == IN) {
            ++len;
        }
    }
    if (state == IN && len > 0)
        wordLenRecord[len] += 1;
    for (i = 0; i < MAXWORDLEN; i++) {
        if (wordLenRecord[i])
            printf("len of %d: %d\n", i, wordLenRecord[i]);
    }
    return 0;
}
