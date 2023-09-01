#include "librerias.h"
#include "Calculadora.cpp"

double performCalculation(double numero1, char operacion, double numero2) {
    Calculadora miCalculadora;

    switch (operacion) {
        case '+':
            return miCalculadora.sumar(numero1, numero2);
        case '-':
            return miCalculadora.restar(numero1, numero2);
        case '*':
            return miCalculadora.multiplicar(numero1,numero2);
        case '/':
            return miCalculadora.division(numero1,numero2);
        case '%':
            return miCalculadora.modulo(numero1,numero2);
        default:
            throw invalid_argument("Operación no válida");
    }
}