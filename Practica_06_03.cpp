// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
//suma de sus elementos.

#include <iostream>
#include <vector>

// Función recursiva para calcular la suma de los elementos en el vector
int sumaVectorRecursiva(const std::vector<int>& vec, int index) {
    // Caso base: cuando el índice llega al final del vector
    if (index == vec.size()) {
        return 0;
    }

    // Llamada recursiva para sumar los elementos restantes
    return vec[index] + sumaVectorRecursiva(vec, index + 1);
}

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Llamada a la función recursiva para calcular la suma
    int suma = sumaVectorRecursiva(numeros, 0);

    std::cout << "La suma de los elementos del vector es: " << suma << std::endl;

    return 0;
}
