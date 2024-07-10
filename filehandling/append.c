#include<stdio.h>
void main() {

    FILE *fptr;
    fptr = fopen("append.txt", "a");

    if(fptr != NULL){
        
        fputs("Appending this line to the file.\n", fptr);

        fclose(fptr);
        printf("Content appended to the file successfully.\n");
    }

        else{
            printf("Failed to open the file for appending.\n");
        }
    }
