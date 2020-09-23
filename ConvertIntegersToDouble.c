#include<stdio.h>

int ConvertIntegersToDouble () { //INTEIROS PARA DECIMAIS

    int iOne;
    int iTwo;
    double dOne;

    printf("Please, enter two integers: ");
    scanf("%d %d",&iOne , &iTwo);
    dOne = (double) iOne ; //CONVERTE O NUMERO INTEIRO iOne PARA UM NUMERO DECIMAL ATRIBUIDO A VARIAVEL dOne
    printf("Result: %.2lf\n ", dOne/iTwo);
return 0;
}

int ActivityConvertingIntegersToDouble () {

int NumberOfGrades = 0 ;
int i = 0 ;
int grade = 0 ;
int Isum = 0;
double Dsum = 0 ;
double average = 0;


scanf("%d", &NumberOfGrades);

for (i=0 ; i < NumberOfGrades ; i++) {
    scanf("%d" , &grade);
    Isum = Isum + grade ;
    }

Dsum = (double) Isum;
average = Dsum/NumberOfGrades  ;


printf("%.2lf",average);

return 0;

}
