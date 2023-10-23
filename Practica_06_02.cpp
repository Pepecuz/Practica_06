// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 2
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
//49,..., para n términos.

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese el número de términos a generar: ";
    std::cin >> n;

    std::vector<int> secuencia;
    secuencia.push_back(1); // El primer término de la secuencia

    for (int i = 1; i < n; i++) {
        int siguiente_valor = secuencia[i - 1] + i;
        secuencia.push_back(siguiente_valor);
    }

    std::cout << "Secuencia generada hasta " << n << " términos: ";
    for (int i = 0; i < n; i++) {
        std::cout << secuencia[i];
        if (i < n - 1) {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;

    return 0;
}
