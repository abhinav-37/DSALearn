#include<stdio.h>

int main(){
    //initializing a structure
    struct rectangle{
        int length;
        int bredth;
    };

    //declaring a structure
    struct rectangle r;
    //declaring and initializing
    struct rectangle r2 = {3,4};
    r2.length = 25;
    printf("the area is %d", r2.length * r2.bredth);
    return 0;

}
