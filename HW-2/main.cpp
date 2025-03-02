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
    std::cout << "Введите координаты трёх точек, x и y на каждую точку:";
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Вычисляем длины сторон
    double a = f(x1, y1, x2, y2);
    double b = f(x2, y2, x3, y3);
    double c = f(x3, y3, x1, y1);

    // Проверяем, можно ли построить треугольник
    bool canExist = t(a, b, c);

    // Вывод результатов

    std::cout << "Длина стороны a = " << a << std::endl;
    std::cout << "Длина стороны b = " << b << std::endl;
    std::cout << "Длина стороны c = " << c << std::endl;

    std::cout << (t(a, b, c) ? "Треугольник с такими сторонами существует." : "Треугольник с такими сторонами не существует.");

	return 0;
}