#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){ 
  string nome;
  double salario, total_vendas;

  cin >> nome >> salario >> total_vendas;
  
  salario = (total_vendas * 0.15) + salario;
  
  cout << fixed << setprecision(2);
  cout << "TOTAL = R$ " << salario << endl;
  return 0;
}