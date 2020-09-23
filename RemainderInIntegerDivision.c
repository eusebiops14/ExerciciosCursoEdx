#include<stdio.h>
int RemainderInIntegerDivision () {
//pay 166 dollars using 20 dollar bills , rest with 1 dollar bills

int twenties = 166 / 20 ;
int rest = 166%20; //retorna o resto da divisao de 166 por 20 (MODULE OPERATOR)
printf("I will pay %d dollars with 20-dollar bills.\n" , twenties * 20 );
printf("I will pay %d dollars with 1-dollar bills.\n" , rest );
return 0;

}


int ActivityWithRest () {
    int TotalNumberOfItens = 0;
    int NumberOfBoxes = 0;
    int ResultBoxes = 0 ;
    int ResultRemainingItens = 0;

    scanf("%d",&TotalNumberOfItens);
    scanf("%d",&NumberOfBoxes);

    ResultBoxes = TotalNumberOfItens/NumberOfBoxes;
    ResultRemainingItens = TotalNumberOfItens%NumberOfBoxes;

    printf("%d\n", ResultBoxes);
    printf("%d", ResultRemainingItens);

return 0;
}
