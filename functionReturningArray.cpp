#include<iostream>
#include<stdio.h>

using namespace std;

int * func(int len)
{
    //this is the c way
    //int *arr = (int *)malloc(5*sizeof(int));
    //now the cpp way
    int *arr = new int[5];
    arr[0] = 5; arr[1] = 5; arr[2] = 8; arr[3] = 12; arr[4] = 34;
    return arr;
}

int main()
{
    int *Parr = func(5);
    cout<<Parr[2];
    return 0;
}
