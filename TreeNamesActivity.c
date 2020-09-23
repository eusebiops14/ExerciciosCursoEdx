#include<stdio.h>

int TreeNamesActivity() {

    int height = 0;
    int NumberOfLeaflets = 0;

    scanf("%d", &height);
    scanf("%d", &NumberOfLeaflets);

    if (height <=5 && NumberOfLeaflets >= 8) {
        printf("Tinuviel");
    }else{

        if (height >= 10 && NumberOfLeaflets >= 10) {
            printf("Calaelen");
        }else{

            if (height <= 8 && NumberOfLeaflets <= 5) {
                printf("Falarion");
            }else{

                if (height >= 12 && NumberOfLeaflets <= 7) {
                    printf("Dorthonion");
                }else{
                    printf("Uncertain");
    }
    }
    }
    }
    return 0;
}
