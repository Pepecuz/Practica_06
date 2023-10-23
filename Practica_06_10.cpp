// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 10
// Problema planteado: . Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
//la lectura de dos números enteros, a partir de la relación:

#include <iostream>

// Función recursiva para calcular el coeficiente binomial C(n, m)
unsigned long long coeficienteBinomial(int n, int m) {
    if (m == 0 || m == n) {
        return 1;
    } else {
        return coeficienteBinomial(n - 1, m - 1) + coeficienteBinomial(n - 1, m);
    }
}

int main() {
    int n, m;

    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;
    std::cout << "Ingrese el valor de m: ";
    std::cin >> m;

    if (n < 0 || m < 0 || m > n) {
        std::cout << "Los valores de n y m deben ser no negativos y m debe ser menor o igual que n." << std::endl;
    } else {
        unsigned long long resultado = coeficienteBinomial(n, m);
        std::cout << "El coeficiente binomial C(" << n << ", " << m << ") es: " << resultado << std::endl;
    }

    return 0;
}
