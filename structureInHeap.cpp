#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    //Rectangle *p;
    //in c
    struct Rectangle*p = (Rectangle*)malloc(sizeof(Rectangle));
    //in cpp
    //struct *p = new Rectangle;
    p->length = 34;
    p->breadth = 67;
    cout << p->length<< endl;
    cout << p->breadth << endl;
    return 0;
}
