#include<stdio.h>
#include<string.h>

    union car {
        int carId;
        char carName[50];
        char carModel[50];
        
    };


void main() {

union car p;

    p.carId = 1;
    // strcpy(p.carName, "Mercedes");
    // strcpy(p.carModel, "Benz");

    printf("%d\n", p.carId);
    // printf("%s\n", p.carName);
    // printf("%s", p.carModel);

}