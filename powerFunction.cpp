#include<stdio.h>
#include<iostream>

using namespace std;

//normal power function
int pow(int m, int n){
  if(n==0){
    return 1;
  }else{
    return pow(m, n - 1) * m;
  };
}

//reduced power function
int powReduced(int m, int n){
  if(n==0){
    return 1;
  }else if(n%2 == 0) {
    return powReduced(m * m, n / 2);
  }else{
    return m * powReduced(m * m, (n - 1) / 2);
  }
}
int main(){
  cout << pow(2, 3) << endl;
  cout << powReduced(2, 3);
}