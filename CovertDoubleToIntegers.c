#include<stdio.h>
int ConvertDoubleToIntegers () { //CASTING
    double dOne = 0;
    double dTwo = 0 ;
    int iOne = 0 ;
    int iTwo = 0 ;

    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne , &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n",dOne,dTwo);
    iOne = (int) dOne;
    iTwo = (int) dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne , iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne / iTwo);


    return 0;
}

int ActivityConvertingDoubleToIntegers () {
    int currentpopulation = 0;
    double dRate = 0;
    //int iRate = 0;
    int result = 0;

    scanf("%d", &currentpopulation);
    scanf("%lf", &dRate);

    //iRate = (int) dRate;

    result = currentpopulation + (currentpopulation * (dRate/100));

    printf("%d", result);

return 0;
}

int ActivityDivideDecimals () {
    double amountOfmoney  = 0;
    double PricePerBook = 0;
    int numberOfBooks = 0;

    scanf("%lf",&amountOfmoney);
    scanf("%lf", &PricePerBook);

    numberOfBooks = amountOfmoney / PricePerBook;

    printf("%d", numberOfBooks);
    return 0;

}

int ActivityDivideWithRoundOff () {
    double amountOfCement = 0 ;
    double NumberOfCementBagsNeeded = 0;
    int numberOfCementBagsToBuy = 0 ;
    double totalPrice = 0;

    scanf("%lf",&amountOfCement);
    NumberOfCementBagsNeeded = amountOfCement/120;
    numberOfCementBagsToBuy = (int)NumberOfCementBagsNeeded + 1; //funcao ceil() arredonda para cima
    totalPrice = numberOfCementBagsToBuy * 45;
    printf("%.0lf",totalPrice);

    return 0;
}
