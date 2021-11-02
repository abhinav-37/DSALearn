#include<iostream>
#include <stdio.h>

using namespace std;
//this is pass by value
int sum(int a, int b)
{
    int c = a+b;
    return c;
};
//now pass by address (this will work)
void swapFunctionAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//now by value again(this will not work)
void swapFunctionValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//now call by reference (this will work but not advisable)
void swapFunctionreference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout<< "the sum is: " <<sum(3,5)<<endl;
    int num1 = 10;
    int num2 = 20;
    cout<<"num 1 is: "<<num1<<endl;
    cout<< "num 2 is: "<<num2<<endl;
    swapFunctionreference(num1, num2);
    cout<<"num 1 is: "<<num1<<endl;
    cout<< "num 2 is: "<<num2<<endl;
}
