#include<stdio.h>
int IfStatement() {
    int weatherIsGood = 0;

    if(weatherIsGood) { //qualquer coisa diferente de zero é igual a true
        printf("The weather is good!\n");
        printf("I can go outside!\n");
    }else {
        printf("The weather is bad!\n");
    }
return 0;
}

int IfStamentWithDynamicCondition () {
    // < > <= >= != == COMPARISON OPERATORS ( != means not equal)
    int a = 5;
    int b = 2;
    int result;
    printf("Check: Is a == b ?\n");
    result = (a==b); //result recebe falso pois a não é igual a b
    printf("Result is %d.\n", result);

    if (result) { //testa se result é igual a zero (false) ou nao (true)
       printf("TRUE!\n");
    }else{
        printf("FALSE!\n");
    }
    return 0;
}

int CarpoolActivity () {
    int Npassengers = 0;
    double GasPrice = 0;
    double totalCost = 0;

    scanf("%d %lf", &Npassengers,&GasPrice);

    if(Npassengers) { //isso é mesmo que escrever if (Npassengers != 0) -> ou seja, se Npassengers é diferente de 0
        totalCost = (1 + GasPrice)/(Npassengers + 1); //adiciona o motorista ao numero de passageiros
    }else{
        totalCost = GasPrice;
    }
    printf("%.2lf",totalCost);

    return 0;
}

int youthHostelActivity () {
    int hoursPastNoon = 0;
    int totalPrice = 0;

    scanf("%d",&hoursPastNoon);
    totalPrice = 10 + (hoursPastNoon * 5);

    if (totalPrice > 53) {
        totalPrice = 53;
    }
    printf("%d",totalPrice);


return 0 ;
}

int ComparingFloatingPointNumbers() { //PRECISAO DOS OPERADORES DE COMPARAÇÃO É DE ATÉ 15 CASAS DECIMAS APOS O PONTO.
    double a = 5.0000000000000000;
    double b = 5.0000000000000001;
    int result = 0;

    printf("Check: Is a == b ? \n");
    result = a == b;
    printf("result is %d\n", result);

    if (result) {
        printf("TRUE!\n");
    }else{
        printf("FALSE!\n");
    }
    return 0;

}

int CrossBridgeActivity() {
    int die1 = 0;
    int die2 = 0;
    int total =0;


    scanf("%d",&die1);
    scanf("%d",&die2);



    if ((die1 + die2) >= 10) {
        total =36;
        printf("Special tax\n");
        printf("%d\n",total);
    }else{
        printf("Regular tax\n");
        total = 2*(die1 + die2);
        printf("%d",total);

}
return 0;
}

int TugOfWarActivity() {

    int NumberOfPlayers = 0;
    int Team1PlayerN_Weight = 0;
    int Team2PlayerN_Weight = 0;
    int TotalWeightTeam1 = 0;
    int TotalWeightTeam2 = 0;
    int k =0 ;

    scanf("%d",&NumberOfPlayers);

    for (k=0;k<NumberOfPlayers;k++) {
        scanf("%d",&Team1PlayerN_Weight);
        scanf("%d",&Team2PlayerN_Weight);

        TotalWeightTeam1 = TotalWeightTeam1 + Team1PlayerN_Weight;
        TotalWeightTeam2 = TotalWeightTeam2 + Team2PlayerN_Weight;
    }

    if (TotalWeightTeam1 > TotalWeightTeam2){
        printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n",TotalWeightTeam1,TotalWeightTeam2);
    }else{
        printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n",TotalWeightTeam1,TotalWeightTeam2);
    }

return 0;
}
