// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica

#include <iostream>
#include <string>
#include <cctype>

// Función recursiva para verificar si una cadena es simétrica
bool esCadenaSimetrica(const std::string& cadena, int inicio, int fin) {
    // Caso base: Si hemos revisado toda la cadena o solo quedó un carácter
    if (inicio >= fin) {
        return true;
    }

    // Comparar los caracteres en las posiciones inicio y fin, ignorando espacios y mayúsculas/minúsculas
    if (std::tolower(cadena[inicio]) != std::tolower(cadena[fin])) {
        return false;
    }

    // Llamada recursiva para los caracteres restantes
    return esCadenaSimetrica(cadena, inicio + 1, fin - 1);
}

int main() {
    std::string cadena;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    // Llamada a la función recursiva para verificar si la cadena es simétrica
    bool simetrica = esCadenaSimetrica(cadena, 0, cadena.length() - 1);

    if (simetrica) {
        std::cout << "La cadena es simétrica." << std::endl;
    } else {
        std::cout << "La cadena no es simétrica." << std::endl;
    }

    return 0;
}

