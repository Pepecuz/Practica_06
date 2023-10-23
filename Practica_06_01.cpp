// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos números enteros aplicando el algoritmo de Euclides

#include <iostream>

int euclides(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclides(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    int mcd = euclides(num1, num2);

    std::cout << "El Máximo Común Divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

    return 0;
}
