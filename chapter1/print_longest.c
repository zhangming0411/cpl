#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    char longest[MAXLINE];
    char line[MAXLINE];
    int maxlen = 0;
    int len; // 当前长度
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > maxlen) {
            copy(longest, line);
            maxlen = len;
        }
    }
    printf("最长的行是:%s长度为%d\n", longest, maxlen);
    return 0;
}

int get_line(char line[], int maxline)
{
    int i = 0;
    char c;
    while ((c = getchar()) != EOF) {
        line[i++] = c;
        if (c == '\n')
            break;
        if (i >= maxline)
            break;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}