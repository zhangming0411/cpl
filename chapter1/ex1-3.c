#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("我是一个标题啦啦啦\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}
