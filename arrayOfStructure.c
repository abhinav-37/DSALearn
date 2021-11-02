#include<stdio.h>

int main(){
    struct card{
        int face;
        int shape;
        int color;
    };

    struct card deck[52] = {{0,0,1},{1,2,3},{3,4,5}};
    deck[0].face = 10;
    printf("the card is %d",deck[0].face);

}
