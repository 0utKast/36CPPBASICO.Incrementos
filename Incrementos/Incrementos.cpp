#include <iostream>

int sumar(int x, int y)
{
    return x + y;
}

int main()
{
    int x{ 8 };
    int valor{ sumar(x, ++x) }; // �esto es  8 + 9, � 9 + 9?
    // Eso depende del orden en el que tu compilador eval�e los argumentos de la funci�n 

    std::cout << valor << '\n'; // valor puede ser 17 � 18, dependiendo de c�mo se eval�e la l�nea de arriba
    return 0;
}

























/*#include <iostream>

int main()
{
    int x{};
    x = 5; // el operador de asignaci�n modifica el estado de x
    ++x; // el operador++ modifica el estado de x
    std::cout << x; // el operador << modifica el estado de la consola
}*/



















/*#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 5 };
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << --y << '\n'; // prefijo
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y-- << '\n'; // postfijo
    std::cout << x << ' ' << y << '\n';

    return 0;
}*/













/*#include <iostream>

int main()
{
    int x{ 8 };
    int y = x++; // x es incrementado a 9, copia del x original es evaluado al valor 8, y 8 es asignado a y

    std::cout << x << ' ' << y;
    return 0;
}*/







/*#include <iostream>

int main()
{
    int x{ 8 };
    int y = ++x; // x es incrementado a 9, x es evaluado al valor 9, y 9 es asignado a y

    std::cout << x << ' ' << y;
    return 0;
}*/