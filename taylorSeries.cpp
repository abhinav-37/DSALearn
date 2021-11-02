#include<iostream>

using namespace std;

//with iteration
double tailorRec(double n, double x){
  double s = 1;
  for (int i = n; i > 0; i--)
  {
    s += 1 + (x / i) * s;
  }
  return s;
}

int main(){
  cout << tailorRec(4, 3);
}