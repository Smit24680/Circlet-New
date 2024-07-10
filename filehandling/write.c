#include<stdio.h>
void main() {

    FILE *ptr;

    ptr = fopen("test.txt", "w");

    fputs("This is a test file.\n", ptr);
    fputs("It contains multiple lines of text.\n", ptr);
    fputs("Each line will be written to the file.\n", ptr);

    fclose(ptr);

    printf("File is created and content is written successfully.");
}