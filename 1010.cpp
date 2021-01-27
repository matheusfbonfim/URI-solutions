#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int cod_peca1, num_peca1, cod_peca2, num_peca2;
  double valor_unit_peca1, valor_unit_peca2;

  cin >> cod_peca1 >> num_peca1 >> valor_unit_peca1;
  cin >> cod_peca2 >> num_peca2 >> valor_unit_peca2;

  cout << fixed << setprecision(2);
  cout << "VALOR A PAGAR: R$ " << (num_peca1*valor_unit_peca1) + (num_peca2*valor_unit_peca2)<< endl;

  return 0;
}