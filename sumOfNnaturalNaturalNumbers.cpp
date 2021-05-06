#include<iostream>

using namespace std;

int fun(int n){
  static int total = 0;
  if(n > 0){
    total += n;
    return fun(n - 1);
  }
  return total;
}
int main(){
  cout << fun(5);
}