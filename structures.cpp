#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int bredth;
};

int main(){
    Rectangle r = {3,5};
    int newvar = 45;
    char newStr[20];
    printf("this is a test");
    cout << r.length << endl;
    Rectangle *p = &r;
    int *Pnewvar = &newvar;
    cout << p->length<<endl;
    cout << Pnewvar <<endl;
    printf("th epointer is %p", Pnewvar);
    cout << "the value is "<<endl;
    cout << *Pnewvar;
    cin >> newvar;
    cout << newvar <<endl;
    cin >> newStr;
    cout << newStr;

    return 0;
}
