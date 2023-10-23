// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
//comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
//conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
//más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
//venta el granjero al cabo de un año?

#include <iostream>

int calcularParejasDeConejos(int meses) {
    if (meses == 0) {
        return 1;  // Al principio, solo tenemos una pareja de conejos.
    } else if (meses == 1) {
        return 2;  // Después de 1 mes, la pareja original es productiva.
    } else {
        // La cantidad de parejas de conejos es la suma de las parejas
        // producidas en el mes anterior y las que se vuelven productivas este mes.
        return calcularParejasDeConejos(meses - 1) + calcularParejasDeConejos(meses - 2);
    }
}

int main() {
    int meses = 12;  // Número de meses en un año
    int parejasDeConejos = calcularParejasDeConejos(meses);
    
    std::cout << "Después de " << meses << " meses, el granjero podrá poner a la venta " << parejasDeConejos << " parejas de conejos." << std::endl;

    return 0;
}
