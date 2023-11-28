#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "P08_02.h"

// Function to count the number of lines in a file
int getlines(char filename[MAX_FILE_NAME]);

int main() {
    // Define file variable
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);

    // Get the number of lines in the file
    int n = getlines(filename);

    // Open the file
    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error: Cannot open the file.\n");
        exit(1);
    }

    // Allocate memory for storing the magic square as an array of pointers
    // where each pointer is a row
    int **magicSquare = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        magicSquare[i] = malloc(n * sizeof(int));
    }

    // Input integer data into the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &magicSquare[i][j]);
            printf("%d\t", magicSquare[i][j]);
        }
        printf("\n");
    }

    // Check if the square is magic
    printf("This square %s magic\n", isMagicSquare(magicSquare, n) ? "is" : "is NOT");

    // Free each row separately before freeing the array of pointers
    for (int i = 0; i < n; i++) {
        free(magicSquare[i]);
    }
    free(magicSquare);

    // Close the file
    fclose(f);

    return 0;
}

// Function to count the number of lines in a file
int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open the file for line counting.\n");
        exit(1);
    }

    int ch_read;
    int count = 0;

    while ((ch_read = fgetc(fp)) != EOF) {
        if (ch_read == '\n') {
            count++;
        }
    }

    printf("Number of lines: %d\n", count);
    fclose(fp);
    return count;
}
