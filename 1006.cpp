#include<iostream>
#include <iomanip>

using namespace std;

int main(){
  double A,B,C = 0;
  double media = 0;

  cin>>A;
  cin>>B;
  cin>>C;

  media = ((A*2.0)+(B*3.0)+(C*5.0))/(2.0+3.0+5.0);
  cout << fixed << setprecision(1);
  cout<<"MEDIA = "<< media<<endl;
  return 0;
}