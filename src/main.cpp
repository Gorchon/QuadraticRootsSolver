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

// Función principal donde obtenemos los coeficientes a, b, c desde la línea de comandos
int main(int argc, char *argv[]) // argc es el número de argumentos y argv es un arreglo de punteros a los argumentos
{

    if (argc != 4)
    {
        std::cerr << "Uso: " << argv[0] << " a b c" << std::endl;
        return 1; // Terminamos con un código de error si no hay tres argumentos
    }

    // Convertimos los argumentos a números de tipo double
    double a = std::stod(argv[1]);
    double b = std::stod(argv[2]);
    double c = std::stod(argv[3]);

    // Llamamos a la función que calcula las raíces
    findRoots(a, b, c);

    return 0; // Finalizamos el programa correctamente
}