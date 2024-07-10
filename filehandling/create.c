#include<stdio.h>
void main() {

    FILE *fptr;
    fptr = fopen("create.txt", "a");

    if(fptr != NULL){
        
        fputs("creating a file.\n", fptr);

        fclose(fptr);
        printf("Content appended to the file successfully.\n");
    }

        else{
            printf("Failed to open the file for appending.\n");
        }
    }