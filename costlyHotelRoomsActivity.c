#include<stdio.h>
int costlyHotelRoomsActivity() {

    int age = 0;
    int luggageweight = 0;
    int price = 0;

    scanf("%d",&age);
    scanf("%d",&luggageweight);

    if (age > 60) {
            price = 0;
    }else{
            if (age < 5) {
                price = 5;
            }else{
                if (age > 5 && age < 60){
                    if (luggageweight <= 20) {
                        price = 30;
                    }else{
                        price = 30 + 10;
                    }
                }
            }
    }
    printf("%d",price);
return 0;
}
