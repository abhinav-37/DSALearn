#include <stdio.h>
#include <stdlib.h>
int main(){
    //here we are assigning an array in the heap part of the memory in c way;
    int *p = (int *)malloc(5*sizeof(int));
    //in cpp way
    //int *p = new int[5];
    p[0] = 6;p[1] = 10; p[2] = 20; p[3] = 30; p[4] = 40; p[5] = 34;

    for(int i = 0; i<5; i++){
        printf("the value is %d\n",p[i] );
    };

    //now ones you have used it you should relese the memory
    //in cpp
    //delete [ ] p;
    //in c
    //aekfaseu fskjsk skgksjngnkjksg soh o
    free(p);
};
