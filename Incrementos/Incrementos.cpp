#include <iostream>

int main()
{
    int x{ 8 };
    int y = x++; // x es incrementado a 9, copia del x original es evaluado al valor 8, y 8 es asignado a y

    std::cout << x << ' ' << y;
    return 0;
}







/*#include <iostream>

int main()
{
    int x{ 8 };
    int y = ++x; // x es incrementado a 9, x es evaluado al valor 9, y 9 es asignado a y

    std::cout << x << ' ' << y;
    return 0;
}*/