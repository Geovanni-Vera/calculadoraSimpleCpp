// Definición de la clase Calculadora
#include "librerias.h"
#include "getOperationInput.cpp"
#include "getNumberInput.cpp"
#include "printResult.cpp"
#include "performCalculation.cpp" 



int main() {
    cout << "Calculadora simple en C++" << endl;

    double numero1 = getNumberInput("Ingrese el primer número: ");
    char operacion = getOperationInput("Ingrese la operación (+ , - , * , /,%): ");
    double numero2 = getNumberInput("Ingrese el segundo número: ");

    try {
        double resultado = performCalculation(numero1, operacion, numero2);
        printResult(resultado);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}


