#include <stdio.h>


#include "quad.h"

int main()
{
    values val;
    double a;
    double b;
    double c;
    printf("Введите коэффициенты: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    val = quad(a, b, c);
    if (val.flag == 2) printf("Solved: x1 = %.2lf, x2 = %.2lf \n", val.x1, val.x2);
    printf("Hello World!\n");
    printf("ax^2+bx+c=0\nWrite a b and c: ");
    quad(0, 0, 0);
    return 0;
}
