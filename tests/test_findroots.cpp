#include <iostream> // Para mostrar mensajes en consola
#include <cassert>  // Para usar assert, que nos ayuda a verificar los resultados
#include <cmath>    // Para funciones matemáticas como sqrt (raíz cuadrada) y fabs (valor absoluto)

// Esta función simula el cálculo de las raíces de una ecuación cuadrática
// y compara las raíces calculadas con las esperadas.
void pruebaEncontrarRaices(double a, double b, double c, double r1_esperado, double r2_esperado)
{
    // Calculamos el discriminante: b^2 - 4ac
    double discriminante = (b * b) - (4 * a * c);

    // Calculamos las dos raíces utilizando la fórmula cuadrática
    double r1 = (-b + std::sqrt(discriminante)) / (2 * a);
    double r2 = (-b - std::sqrt(discriminante)) / (2 * a);

    // Verificamos si las raíces calculadas son correctas
    // Usamos un margen de error pequeño (1e-6) porque los cálculos en punto flotante no son exactos
    assert(std::fabs(r1 - r1_esperado) < 1e-6 && "Error en la raíz 1");
    assert(std::fabs(r2 - r2_esperado) < 1e-6 && "Error en la raíz 2");

    // Si las raíces son correctas, mostramos un mensaje de éxito
    std::cout << "Prueba pasada!" << std::endl;
}

int main()
{
    // Probamos con la ecuación x^2 - 4x + 3 = 0, cuyas raíces deberían ser 3 y 1
    pruebaEncontrarRaices(1, -4, 3, 3, 1);

    // Si las raíces esperadas son correctas, se imprimirá "Prueba pasada!"
    return 0; // El programa termina correctamente
}