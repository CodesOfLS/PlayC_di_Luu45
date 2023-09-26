#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;
    fahr = lower;

    printf("%3s\t%6s\n", "Fahr", "Cels");
    printf("--------------\n");
    while (fahr <= upper)
    {
        celsius = (9.0 / 5.0) * (fahr - 32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr += step;
    }
    printf("--------------\n");

    return 0;
}