#include <stdio.h>

#define IN 1
#define OUT 2
#define INIT 3
#define UNINIT 4

int main(int argc, char const *argv[])
{
    int c, state, init;
    state = OUT;
    init = UNINIT;  // 未初始化
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {  // 初次进入 一个word
            state = IN;
            if (init == INIT)
                putchar('\n');
        }
        if (state == IN) {
            putchar(c);
            init = INIT;
        }
    }
    return 0;
}
