class Calculadora{
public:
    double sumar(double numero1, double numero2) {
        return numero1 + numero2;
    }

    double restar(double numero1, double numero2) {
        return numero1 - numero2;
    }
    
    double multiplicar(double numero1, double numero2) {
        return numero1 * numero2;
    }

    double division(double numero1, double numero2) {
        if(!(numero2 == 0))
        {
            return numero1 / numero2;
        }
        else
        {
            throw invalid_argument("Operación no válida");
        }
    }

    double modulo(double numero1, double numero2) {
        if(!(numero2 == 0))
        {
            return (int)numero1 % (int)numero2;
        }
        else
        {
            throw invalid_argument("Operación no válida");
        }
    }
    
};