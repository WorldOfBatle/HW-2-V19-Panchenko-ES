#include <iostream>
#include <cmath> // Для sqrt, pow

// Функция f(x1, y1, x2, y2)
double calculateDistance(double x1, double y1, double x2, double y2)
{
    // Используем формулу расстояния
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx * dx + dy * dy);
}

// Функция t(a, b, c)
bool canFormTriangle(double a, double b, double c)
{
    return ((a + b > c) && (b + c > a) && (a + c > b)) ? true : false;
}

int main()
{
    std::cout << "Введите координаты трёх точек, x и y на каждую точку:";
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Вычисляем длины сторон
    double a = calculateDistance(x1, y1, x2, y2);
    double b = calculateDistance(x2, y2, x3, y3);
    double c = calculateDistance(x3, y3, x1, y1);

    // Проверяем, можно ли построить треугольник
    bool canExist = canFormTriangle(a, b, c);

    // Вывод результатов

    std::cout << "Длина стороны a = " << a << std::endl;
    std::cout << "Длина стороны b = " << b << std::endl;
    std::cout << "Длина стороны c = " << c << std::endl;

    std::cout << "Треугольник с такими сторонами " << (canExist ? "существует." : "не существует.") << std::endl;

	return 0;
}