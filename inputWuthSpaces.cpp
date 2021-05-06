#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int arr[5];
  cout << "enter some numbers";
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  };

  cout << arr[4];

  return 0;
}