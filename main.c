#include <stdio.h>
#include <math.h>

// Functions 
// <type> <name>(args)

double f(double x)
{
    return exp(x) - log(x) - 10 * x;
}

int main()
{
    double a = 3.0;
    double b = 4.0;
    double answer;

    double eps = 0.0001; // Значение точности
    double f_a = f(a);
    while(b - a > eps)
    {
        double center = (a + b) / 2.0; // Середина отрерзка
        double f_center = f(center);
        if (f_center == 0)
        {
            // Действия, если условие истинно
            break;
        } 
        else
        {
            if (f_a * f_center > 0)
            {
                a = center;
                f_a = f_center;
            }
            else
            {
                b = center;
            }
        }       
    }
    answer = (a+b) / 2.0;

    printf("Answer: %f\n",answer);
    return 0;
}