#include <stdio.h>

/*
此题是让读者自行尝试书中未提到的格式字符
*/

int main(int argc, char const *argv[])
{
    printf("This is a nomal sentence.\n");
    printf("This is a sentence with \\a: before\aafter.\n");
    printf("This is a sentence with \\t: before\tafter.\n");
    printf("This is a sentence with \": before\"after.\n");
    return 0;
}
