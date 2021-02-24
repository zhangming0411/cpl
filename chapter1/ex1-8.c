#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nspace, nt, nn; // 空格，制表符，换行符
    nspace = nt = nn = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            nspace++;
        if (c == '\t')
            nt++;
        if (c == '\n')
            nn++;
    }
    printf("nspace=%d, nt=%d, nn=%d\n", nspace, nt, nn);
    return 0;
}
