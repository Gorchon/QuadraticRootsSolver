// Hecho por: José María Soto Vzla
// Fecha: 15 de Octubre, 2024

// Explicación:
// Este archivo se creó para realizar pruebas automáticas del código que calcula las raíces
// de una ecuación cuadrática. El propósito es verificar que, dado un conjunto de coeficientes
// de una ecuación cuadrática, las raíces calculadas sean correctas comparadas con las raíces esperadas.
//
// Usamos la función `assert` para comprobar automáticamente si los valores que obtenemos son correctos.
// Esto nos ahorra tener que hacer pruebas manuales y nos permite detectar errores fácilmente.
// Si la prueba pasa, se imprime "Prueba pasada!". Si no, `assert` detiene el programa y nos indica dónde está el error.

// Librerías incluidas
#include <iostream>
#include <cassert> // Esta librería es interesante porque nos permite hacer pruebas de nuestro código usando assert
#include <cmath>   // Para funciones matemáticas como sqrt (raíz cuadrada) y fabs (valor absoluto)

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