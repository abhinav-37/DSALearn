#include<stdio.h>
#include<iostream>

using namespace std;

//for writing tmplate class
template <class T>
class Calculations{
  private:
    T length;
    T bredth;
  public:
    Calculations(T a, T b);
    T add();
    T muliply();
    void changeLength(T len);
    void changeBreadh(T bre);
};
//if you want to declare the functions outside the class
template<class T>
Calculations<T>::Calculations(T a, T b){
  this->length = a;
  this->bredth = b;
};
template<class T>
T Calculations<T>::add(){
  return length + bredth;
};

template<class T>
T Calculations<T>::muliply(){
  return length * bredth;
};

template<class T>
void Calculations<T>::changeLength(T len) {
  this->length = len;
};

template<class T>
void Calculations<T>::changeBreadh(T bre){
  this->bredth = bre;
};
int main(){
  Calculations<float> cal(2.5,45.56),cal2(10,10);
  cout << cal.add() << endl;
  cout << cal2.add() << endl;

}
