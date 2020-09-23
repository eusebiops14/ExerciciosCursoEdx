#include <stdio.h>
int LogicalConditionsUsingAnd() {
    int sunny = 0;
    int vacation =1;
    int sunAndVacation = sunny && vacation;

    if (sunAndVacation){
        printf("Yeah!!\n");
    }else{
        printf("Too bad!\n");
    }

return 0;
}
