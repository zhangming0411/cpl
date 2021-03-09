/*
这道题翻译的不知所云。原版题目是：
Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, 
and as much as possible of the text.
emmmm好像确实有点难懂。（装作）意思是打印任意出入文字的长度，及内容。
*/

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int len;
    int max;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        printf("length of input: %d\n", len);
        printf("content of input: %s\n", line);
    }
    
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}