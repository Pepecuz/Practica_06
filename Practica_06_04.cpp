// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <string>

// Función recursiva para imprimir una cadena al revés
void imprimirCadenaAlReves(const std::string& cadena, int index) {
    if (index < 0) {
        return;
    }
    
    std::cout << cadena[index];
    imprimirCadenaAlReves(cadena, index - 1);
}

int main() {
    std::string cadena;
    std::cout << "Ingrese una cadena: ";
    std::cin >> cadena;

    int longitud = cadena.length();
    
    std::cout << "Cadena al revés: ";
    imprimirCadenaAlReves(cadena, longitud - 1);
    std::cout << std::endl;

    return 0;
}
