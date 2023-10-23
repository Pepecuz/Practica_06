// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función:

#include <iostream>

// Función recursiva para calcular Q(n)
int calcularQ(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n + calcularQ(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    int resultado = calcularQ(n);

    std::cout << "El resultado de Q(" << n << ") es: " << resultado << std::endl;

    return 0;
}

