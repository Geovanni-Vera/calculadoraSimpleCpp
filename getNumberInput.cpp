#include "librerias.h"
double getNumberInput(const string& prompt) {
    double number;
    cout << prompt;
    cin >> number;
    return number;
}