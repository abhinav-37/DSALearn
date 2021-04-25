#include <iostream>
#include<stdio.h>

using namespace std;
//by value
int arraySumValue(int Parray[30])
{
    int sum = 0;
    for(int i = 0; i<6; i++){
        sum+=Parray[i];
    };
    return sum;
};
//by address
int arraySumAddress(int *Parray)
{
    int sum = 0;
    for(int i = 0; i<6; i++){
        sum += Parray[i];
    };
    return sum;
};
//by Reference
int arraySumRef(int &Parray)
{
    int sum = 0;
    for(int i = 0; i<6; i++){
        sum += Parray[i];
    };
    return sum;
};
int main()
{

    int arr[] = {20,20,20,30,40,11};
    //passing the array and printing the value
    cout<<"By passing in the value: "<<arraySumValue(arr)<<endl;
    //passing the adddress
    cout<<"By passing in the address: "<<arraySumAddress(arr)<<endl;
    //passing the reference
    cout<<"By passing in the referrnce: "<<arraySumRef(arr)<<endl;
}
