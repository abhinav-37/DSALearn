#include<iostream>

using namespace std;

void fun1(int n){
  if(n>0){
    fun1(n - 1);
    cout << n << endl;
  }
}

int main(){
  int a = 4;
  fun1(a);
  return 0;
}