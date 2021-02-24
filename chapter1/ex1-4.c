#include <stdio.h>
// 摄氏度转换为华氏

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 100;
    step = 8;

    printf("摄氏->华氏\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%6.2f\t%6.2f\n", fahr, celsius);
        celsius += step;
    }
    return 0;
}
