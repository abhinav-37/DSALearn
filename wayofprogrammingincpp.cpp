#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int bredth;
    //constructor
    public:
    Rectangle(int l , int b)
    {
        length = l;
        bredth = b;
    };

    //calculating the area
    int area()
    {
        int area =length*bredth;
        return area;
    }
    //changing the length
    int changeLength(int l)
    {
        length = l;
    }
};
int main()
{
    Rectangle r(5,5);
    cout<<r.area()<<endl;
    r.changeLength(6);
    cout<<r.area()<<endl;
}
