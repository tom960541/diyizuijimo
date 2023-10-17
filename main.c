#include <stdio.h>
#include <math.h>

int main()
{
    double x, r;

    scanf("%lf", &x);
    r = x * 3.14159 / 180;
    printf("x=%f, cos = %lf\n", x, cos(r));
}