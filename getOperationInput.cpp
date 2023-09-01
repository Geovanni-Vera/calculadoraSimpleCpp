#include "librerias.h"
char getOperationInput(const string& prompt) {
    char operation;
    cout << prompt;
    cin >> operation;
    return operation;
}