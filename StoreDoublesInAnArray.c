#include<stdio.h>

int StoreDoublesInAnArray () {

    double array [3];
    double readValue = 0.0 ;
    int cellNumber = 0;
    int i = 0;

    for (i=0; i <3 ; i++) {
        printf("Enter a decimal value:");
        scanf("%lf", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %lf.\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;

            }
return 0;
}

int RailConvoyActivity () {
    int k = 0;
    int numberOfCars = 0;
    double eachCarWeight = 0;
    double TotalWeight = 0;
    int CarIndex = 0;

    scanf("%d",&numberOfCars); //quantidade total de vagões

    double arrayWeights[numberOfCars];

    for (k=0; k < (numberOfCars);k++) {
           scanf("%lf", &eachCarWeight);
            arrayWeights[CarIndex] = eachCarWeight;

            TotalWeight = TotalWeight + eachCarWeight;
            CarIndex = CarIndex +1;
    }
//printf("%lf", arrayWeights);

    double Media = TotalWeight/numberOfCars;

    for (k=0; k < (numberOfCars);k++) {


}


return 0;
}

