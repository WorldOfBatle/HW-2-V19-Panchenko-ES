#include <iostream>
#include <cmath> // Для sqrt, pow

// Функция f(x1, y1, x2, y2)
double f(double x1, double y1, double x2, double y2)
{
    // Используем формулу расстояния
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx * dx + dy * dy);
}

// Функция t(a, b, c)
bool t(double a, double b, double c)
{
    return ((a + b > c) && (b + c > a) && (a + c > b)) ? true : false;
}

int main()
{

	return 0;
}