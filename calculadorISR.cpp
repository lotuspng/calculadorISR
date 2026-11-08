// este programa calcula el bracket en el que el que caes en base a el base multiplicado por 12 y cayendo en cada bracket dependiendo de la cantidad


#include <iostream>
using namespace std;

int main()
{
    double sueldomensual;
    double sueldoanual;
    double isr;

    cout << "Ingresa tu sueldo mensual: ";
    cin >> sueldomensual;

    cout << fixed;
    // estuve 6 horas googleando este infortunio porque me daba los resultados en notación
    sueldoanual = sueldomensual * 12;

    if (sueldoanual <= 416220) {
        isr = 0;
        cout << "Usted no aplica ISR";
    }
    else if (sueldoanual <= 624329) {
        isr = (sueldoanual - 416220) * 0.15;
        cout << "Su sueldo anual es: " << sueldoanual;
        cout << " y usted va a pagar: " << isr / 12;
    }
    else if (sueldoanual <= 867123) {
        isr = 31216 + (sueldoanual - 624329) * 0.20;
        cout << "Su sueldo anual es: " << sueldoanual;
        cout << " y usted va a pagar: " << isr / 12;
    }
    else {
        isr = 79776 + (sueldoanual - 867123) * 0.25;
        cout << "Su sueldo anual es: " << sueldoanual;
        cout << " y usted va a pagar: " << isr / 12;
    }

    return 0;
}