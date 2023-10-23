// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <vector>

// Función recursiva para comparar dos vectores
bool sonVectoresIguales(const std::vector<int>& vec1, const std::vector<int>& vec2, int index) {
    // Verificar si hemos llegado al final de ambos vectores
    if (index == vec1.size() && index == vec2.size()) {
        return true;
    }
    
    // Verificar si los vectores tienen la misma longitud
    if (vec1.size() != vec2.size()) {
        return false;
    }

    // Verificar si los elementos en la posición actual son iguales
    if (vec1[index] != vec2[index]) {
        return false;
    }
    
    // Llamada recursiva para comparar los elementos restantes
    return sonVectoresIguales(vec1, vec2, index + 1);
}

int main() {
    std::vector<int> vector1 = {1, 2, 3, 4, 5};
    std::vector<int> vector2 = {1, 2, 3, 4, 5};

    // Llamada a la función recursiva para comparar los vectores
    bool iguales = sonVectoresIguales(vector1, vector2, 0);

    if (iguales) {
        std::cout << "Los vectores son iguales." << std::endl;
    } else {
        std::cout << "Los vectores no son iguales." << std::endl;
    }

    return 0;
}
