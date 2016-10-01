#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define charToInteger(c) (c - '0')
#define NOT_A_BINARY 101010

int main(int argc, char** argv)
{
    char input[255];
    int inputLength;
    int i = 0, j = 0;
    unsigned long result = 0;
    printf("Enter your binary: ");
    scanf("%s", input);
    inputLength = strlen(input);
    printf("strlen(input) = %d\n", inputLength);
    int *processedInput = malloc(sizeof(int)*inputLength);
    printf("Allocated %d bytes for number at %p\n", sizeof(int)*inputLength, processedInput);
    for (i = 0; i < inputLength; i++) {
        processedInput[i] = charToInteger(input[i]);
        /* by the way, we need to check if input is binary */
        if (processedInput[i] != 0 && processedInput[i] != 1) {
            printf("Not a binary!\n");
            free(processedInput);
            return NOT_A_BINARY;
        }
        printf("%p: #%d = %d\n", &processedInput[i], i, processedInput[i]);
    }
    /* now we have to reverse array */
    i = inputLength - 1;
    while (i > j) {
        processedInput[i]^=processedInput[j];
        processedInput[j]^=processedInput[i];
        processedInput[i]^=processedInput[j];
        i--;
        j++;
    }
    /* done! */
    for (i = 0; i < inputLength; i++) {
        result += processedInput[i] * pow(2, i);
    }
    printf("%s to decimal = %lu\n", input, result);
    free(processedInput);
    return 0;
}
