#include<stdio.h>
int DetailsOfTheForLoop () {
    // i++ is short for i = i +1
    int i =0;

    for (i=0; i < 3 ; i = i +1) {
        printf("i has the value %d.\n",i);
    }

    return 0;
}
