/*
Q: Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines.
题目有些意思，决定还是采用书里面获取最大行的程序类似结构。在get_line函数处理每一行，先挨个字符复制，然后再倒回来检查每个字符，直到碰到非制表符或空；如果只有空格，就返回0
*/

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline, int *length);

int main(int argc, char const *argv[])
{
    int len;
    char line[MAXLINE];

    while ((get_line(line, MAXLINE, &len)) >= 0) {
        if (len > 0)
            printf("length: %d, content is: %s\n", len, line);
    }
    if (len > 0)
        printf("length: %d, content is: %s\n", len, line);
    return 0;
}

int get_line(char s[], int lim, int *length)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (i > 0)
        i--;
    for ( ;s[i]=='\t' || s[i]==' '; --i)
        ;
    if (i == 0) {  // 如果是空就返回啦
        *length = 0;
        return 0;
    }
    if (c == '\n') {
        s[++i] = c;
        s[i] = '\0';
        *length = i;
    } 
    if (c == EOF) {
        s[++i] = '\0';
        *length = i;
        return -1;
    }
    return 0;
}
