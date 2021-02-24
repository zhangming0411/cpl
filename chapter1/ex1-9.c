#include <stdio.h>

// 将输入复制到输出，将连续的多个空格用一个空格代替

int main(int argc, char const *argv[])
{
    int c, inSpace;
    inSpace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!inSpace)
                putchar(c);
            inSpace = 1;
        } else {
            putchar(c);
            inSpace = 0;
        }
    }
    return 0;
}
