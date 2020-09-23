#include<stdio.h>
int IntegersAndDoubles () {
int age = 0;
double height = 0 ;

printf("What is your age ?");
scanf("%d",&age);
printf("What is your height ?");
scanf("%lf",&height);
printf("You're %d years old and %.2lf meters tall.",age,height);

return 0;
}

int scanfWithDoublesAndIntegers() {
    int age = 0 ; //NUMERO INTEIRO %d
    double height = 0 ; //NUMERO REAL %lf

    printf("What is your age and your height ? (separated by spaces)\n");
    scanf("%d %lf",&age , &height);
    printf("You're %d years old and %.2lf meters tall.",age,height);

    return 0;
}

int DistanceCalculator() {
    double distKM = 0;
    double distMiles = 0;
    scanf("%lf",&distKM);
    distMiles = (distKM*0.621371);
    printf("%.6lf",distMiles);
return 0;
}
