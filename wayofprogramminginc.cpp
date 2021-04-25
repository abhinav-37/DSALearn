#include<stdio.h>
#include<iostream>

using namespace std;
//defining a structure
struct Rectangle
{
    int length;
    int bredth;
};
//assigning value to the structure
void assignFunction(struct Rectangle *P, int length, int bredth)
{
    P -> length = length;
    P -> bredth = bredth;

};
//calculating the are
int area(struct Rectangle p)
{
    int area = p.length*p.bredth;
    return area;
}
//changing the length
int changeLength(struct Rectangle *P, int length)
{
    P -> length = length;
}
//the main function
int main()
{
    struct Rectangle rec1;
    assignFunction(&rec1, 5,5);
    cout<<area(rec1)<<endl;
    changeLength(&rec1, 6);
    cout<<area(rec1)<<endl;
}
