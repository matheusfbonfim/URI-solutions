#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int num_func = 0;
    int num_horas = 0;
    float valor_hora = 0;

    cin >> num_func >> num_horas >> valor_hora;
    

    cout << "NUMBER = " << num_func << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << (num_horas * valor_hora) << endl;

    return 0;
}