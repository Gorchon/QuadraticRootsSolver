#include <iostream>
#include <cmath>  // for sqrt function
#include <limits> // for numeric limits

// Funcion para calcular las raices de una ecuacion cuadratica  ax^2 + bx + c = 0
// a, b, c are the coefficients of the equation
void findRoots(double a, double b, double c)
{
    // Calculamos el discriminante (b^2 - 4ac), que nos dice la naturaleza de las raíces
    double discriminante = (b * b) - (4 * a * c);

    // Si el discriminante es mayor a 0, tenemos dos raíces reales
    if (discriminante > 0)
    {
        double raiz1 = (-b + std::sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - std::sqrt(discriminante)) / (2 * a);
        std::cout << "{" << raiz1 << ", " << raiz2 << "}" << std::endl;
    }
    // Si el discriminante es igual a 0, tenemos una única raíz real
    else if (discriminante == 0)
    {
        double raiz = -b / (2 * a);
        std::cout << "{" << raiz << "}" << std::endl;
    }
    // Si el discriminante es menor a 0, no tenemos raíces reales ( a esto se le conoce como raíces complejas)
    else
    {
        std::cout << "{}" << std::endl; // Retornamos un set vacío
    }
}

int main(int argc, char *argv[])
{
    return 0;
}