# Quadratic Roots Solver

Este programa está diseñado para calcular las raíces reales de una ecuación cuadrática de la forma:

![Descripción de la imagen](/images/imageForReadme.jpg)


## Objetivo

El objetivo con este script es resolver ecuaciones cuadráticas de segundo grado, calculando sus raíces reales utilizando la fórmula cuadrática de toda la vida, sin el uso de bibliotecas externas para el cálculo.

El programa recibe tres valores (los coeficientes a, b, y c) como argumentos. A partir de esos coeficientes, calcula las raíces reales de la ecuación cuadrática ax^2 + bx + c = 0.

	•	Si la ecuación tiene soluciones reales (cuando el discriminante es positivo o cero), el programa te devolverá esas raíces.
	•	Si el discriminante es negativo, lo que indica que no existen raíces reales, el programa te devolverá un conjunto vacío '{}'.

Asi que este programa no solo resuelve ecuaciones cuadráticas, sino que también te indica si las soluciones son reales o inexistentes.



## Instrucciones para Compilar y Ejecutar

A continuación, se explica cómo compilar y ejecutar el programa en un entorno Linux usando CMake. El mismo proceso debería funcionar en Windows si se tienen las herramientas necesarias instaladas.

### 1. Clonar el Repositorio

Primero, clona este repositorio en tu máquina local:

```bash
git clone https://github.com/tu-usuario/tu-repositorio.git
cd tu-repositorio
```

### 2. Crear el Directorio de Compilación

Antes de compilar, es una buena práctica crear un directorio separado para los archivos generados por la compilación. Esto facilita el mantenimiento y limpieza del proyecto:

```bash
mkdir build
cd build
```

### 3. Ejecutar CMake para Generar los Archivos de Compilación

Utiliza CMake para generar los archivos de compilación. Esto se hace desde el directorio `build` que acabas de crear:

```bash
cmake ..
```

Este comando configura el proyecto y prepara el entorno de compilación.

### 4. Compilar el Programa

Después de ejecutar CMake, usa `make` para compilar el programa:

```bash
make
```

Este comando genera dos ejecutables:

- **findroots**: El programa principal que calcula las raíces de una ecuación cuadrática.
- **test_findroots**: Un archivo de prueba para verificar que las raíces se calculen correctamente.

### 5. Ejecutar el Programa Principal

Una vez que el programa está compilado, puedes ejecutar el archivo principal `findroots` para calcular las raíces de una ecuación cuadrática. Por ejemplo, para resolver la ecuación \(x^2 - 4x + 3 = 0\), que tiene como solución \(x = 3\) y \(x = 1\):

```bash
./findroots 1 -4 3
```

El resultado esperado será:

```bash
{3, 1}
```

### 6. Probar el Programa con un Archivo de Prueba

Si deseas verificar que las pruebas automáticas del código funcionan correctamente, puedes ejecutar el archivo de prueba `test_findroots`. Esta prueba compara las raíces calculadas con los valores esperados para asegurarse de que el programa funciona como debería.

Para ejecutar las pruebas:

```bash
./test_findroots
```

Si todo es correcto, el programa imprimirá:

```bash
Prueba pasada!
```

### 7. Comportamiento en Caso de No Existir Raíces Reales

En caso de que los coeficientes \(a\), \(b\), y \(c\) proporcionados no resulten en raíces reales (por ejemplo, si el discriminante es negativo), el programa devolverá un conjunto vacío `{}`. Por ejemplo, al ejecutar:

```bash
./findroots 1 2 3
```

El resultado será:

```bash
{}
```

### Explicación del Algoritmo Implementado

El programa utiliza la fórmula cuadrática para calcular las raíces de la ecuación \(ax^2 + bx + c = 0\):

\[
x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
\]

Dependiendo del valor del discriminante (\(b^2 - 4ac\)):

- **Si el discriminante es mayor que cero**, hay dos raíces reales.
- **Si el discriminante es igual a cero**, hay una raíz real.
- **Si el discriminante es menor que cero**, no hay raíces reales.

El programa maneja estos tres casos e imprime las raíces o un conjunto vacío `{}` cuando no hay solución real.

### Consideraciones Finales

Este proyecto está configurado para ser compilado usando CMake, lo que facilita la instalación y la portabilidad a diferentes entornos de desarrollo. El archivo de prueba permite verificar la correcta implementación de la fórmula cuadrática sin depender de pruebas manuales.

### Subir a GitHub

Una vez que el programa está funcionando correctamente, asegúrate de subir los cambios a GitHub:

```bash
git add .
git commit -m "Primera versión del programa de raíces cuadráticas"
git push origin master
```

## Conclusión

Este programa resuelve eficientemente ecuaciones cuadráticas de segundo grado usando C++. Para compilarlo y ejecutarlo, no se necesitan librerías externas, cumpliendo así con el requisito de calcular las raíces usando solo la fórmula cuadrática convencional. 

---

Con este README, has explicado el propósito del programa, cómo compilarlo, cómo ejecutarlo, y cómo funciona el algoritmo. También has dado instrucciones claras sobre cómo correr las pruebas y qué esperar al ejecutarlas.

¡Avísame si necesitas algún cambio adicional!