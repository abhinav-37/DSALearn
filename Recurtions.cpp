#include<iostream>
#include <chrono>
using namespace std;

void fun1(int n){
  if(n>0){
    cout << n << endl;
    fun1(n - 1);
   
  }
}

int main(){
  int a = 100;
  fun1(a);
  return 0;
}