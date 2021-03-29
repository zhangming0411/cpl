#include <stdio.h>

#define MAXLINE 1000

char *reverse(char s[]);

int main(int argc, char const *argv[])
{
    char c, *dst;
    char s[MAXLINE];
    int i = 0;
    while ((c = getchar()) != EOF)
    {
        s[i] = c;
        i++;
        if ((c == '\n') || (i >= MAXLINE-1)) {
            s[i] = '\0';
            // printf("%s", s);
            reverse(s);
            printf("%s\n", s);
            i = 0;
        }
    }
    return 0;
}

char *reverse(char s[])
{
    int i=0, j=0;
    char c;
    char dst[MAXLINE];
    while ((dst[i] = s[i]) != '\0')
        i++;
    // printf("i=%d\n", i);
    if (i > 0) {
        for (j = 0; j < i; j++) {
            s[j] = dst[i-1-j];
        }
        s[j] = '\0';
    }
    return s;
}
