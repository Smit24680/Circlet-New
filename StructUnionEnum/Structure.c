#include<stdio.h>
#include<string.h>

    struct car {
        int carId;
        char carName[50];
        char carModel[50];
        
    };


int main() {

struct car p;

    p.carId = 1;
    strcpy(p.carName, "Mercedes");
    strcpy(p.carModel, "Benz");

    printf("%d\n", p.carId);
    printf("%s\n", p.carName);
    printf("%s", p.carModel);

    return 0;

}