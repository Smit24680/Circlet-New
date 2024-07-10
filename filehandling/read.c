#include<stdio.h>
void main() {

    FILE *ptr;

    ptr = fopen("test.txt", "r");

    if (ptr != NULL) {

        printf("File opened successfully\n");
        fclose(ptr);
    }
    else {
        printf("Unsuccessful in opening the file.\n");
    }

}