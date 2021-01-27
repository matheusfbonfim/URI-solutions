#include<iostream>
#include <iomanip>

using namespace std;

int main(){
  double A,B = 0;
  double media = 0;

  cin>>A;
  cin>>B;

  media = ((A*3.5)+(B*7.5))/(11);
  cout << fixed << setprecision(5);
  cout<<"MEDIA = "<< media<<endl;
  return 0;
}