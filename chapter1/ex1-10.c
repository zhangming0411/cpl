#include <stdio.h>

// 将输入复制到输出，将制表符替换成\t， 回退符替换成\b，反斜杠替换成\\

int main(int argc, char const *argv[])
{
    int c, inSpace;
    inSpace = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
    return 0;
}
