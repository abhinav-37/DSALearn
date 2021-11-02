#include<iostream>

using namespace std;
int fun1(int n){
  static int a = 0;
  if(n>0){
    a++;
    return fun1(n - 1) + a ;
  }
  return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
}

int main (){
  int n = 6;
  cout << fun1(n);
  return 0;
}