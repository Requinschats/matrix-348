#include <stdio.h>


void matrixTranspose(int rows, int columns, int *inputMatrixPointer) {

    int inputMatrixValues[rows][columns];
    int outputMatrixValues[columns][rows];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            inputMatrixValues[j][i] = *inputMatrixPointer;
            printf("%*d", 3, inputMatrixValues[j][i]);
            inputMatrixPointer = inputMatrixPointer + 1;
        }
        printf("\n");
    }
    printf("\n");

    int count = 0;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            outputMatrixValues[j][count] = inputMatrixValues[count][j];
            printf("%*d", 3, outputMatrixValues[j][count]);
        }
        count = count + 1;
        printf("\n");
    }
}

int main() {
    int b[2][3] = {
            {0, 1, 2},
            {4, 5, 6}
    };

    int *bPointer = &b[0][0];
    matrixTranspose(2 , 3, bPointer);
    return 0;

}