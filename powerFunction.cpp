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

//using loops
int powLoopsNoob(int m, int n){
  int result = m;
  if(n == 0)
    return 1;
  for (int i = 0; i < n-1; i++)
  {
    result *= m;
  }
  return result;
}
int powLoopsPro(int m, int n){
  int result = m * m;
  int extras = 1;
  if(n % 2 == 0){
    n = n / 2;
    while (n != 1){
      if(n %2 == 0){
        result *= result;
        n = n / 2;
      }else{
        n = n - 1;
        extras *= result;
        result *= result;
        n = n / 2;
      }

    };
    return extras*result;
  }else {
    n = n - 1;
    extras *= m;
    n = n / 2;
    while (n != 1){
      if(n %2 == 0){
        result *= result;
        n = n / 2;
      }else{
        n = n - 1;
        extras *= result;
        result *= result;
        n = n / 2;
      }

    };
    return extras *result;
  }

}
int main(){
  //cout << pow(2, 7) << endl;
  cout << powReduced(3, 14) << endl;
  cout << powLoopsPro(3, 14)<<endl;
  cout << powLoopsNoob(3, 14);
}
