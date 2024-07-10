#include<stdio.h>

    enum Days {
        Sunday,
        Monday = 5,
        Tuesday = Monday + 2,
        Wednesday
    };
    
void main() {

    enum Days day;
    day = Wednesday;
    printf("%d",day);

}