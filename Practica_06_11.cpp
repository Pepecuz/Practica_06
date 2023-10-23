// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 11
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
//entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
//de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
//• Empiece con cualquier entero positivo.
//• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
//• Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por
//jemplo, cuando el entero inicial es 26, la secuencia será:
//26 13 40 20 10 5 16 8 4 2 1

#include <iostream>

void conjeturaUllman(int n) {
    std::cout << n << " ";

    if (n == 1) {
        return;  // Caso base: el proceso se detiene cuando n llega a 1.
    } else if (n % 2 == 0) {
        conjeturaUllman(n / 2);  // Si n es par, divídelo entre 2.
    } else {
        conjeturaUllman(3 * n + 1);  // Si n es impar, multiplícalo por 3 y suma 1.
    }
}

int main() {
    int n;

    std::cout << "Ingrese un entero positivo mayor que 1: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "El entero debe ser mayor que 1." << std::endl;
    } else {
        conjeturaUllman(n);
        std::cout << std::endl;
    }

    return 0;
}
