/*
Write a program detab that replaces tabs in the input with the proper number of blanks
 to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. 
 Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>

#define MAXLINE 1024
#define TAB '\t'
#define SPACE ' '
#define TABLEN 5

int get_line(char line[], int maxline);

int main(int argc, char const *argv[])
{
    char c;
    char line[MAXLINE];
    int llength, i, k;  //本行长度, i, k
    while ((llength = get_line(line, MAXLINE)) > 0)
    {
        for (i = 0; i < llength; i++)
        {
            c = line[i];
            if (c == TAB) {
                for (k=i ; (k%TABLEN) > 0; k++)
                putchar(SPACE);
            } else {
                putchar(c);
            }
        }
    }
    return 0;
}


int get_line(char line[], int maxline)
{
    char c;
    int i = 0;
    while ((c = getchar()) != EOF)
    {
        line[i++] = c;
        if (c == '\n') {
            break;
        }
        if (i >= maxline-1) {
            break;
        }
    }
    line[i] = '\0';
    return i;
}