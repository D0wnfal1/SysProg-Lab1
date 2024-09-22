#include "calculator.h"

int Calculator::Add (double a, double b)
{

    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

double Calculator::Div(double a, double b)
{
    if (b>0) 
    {
        return a / b;
    }
}
