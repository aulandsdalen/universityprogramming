#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned int array_size;
    int i;
    int *a;
    printf("Enter desired size of the array: ");
    scanf("%u", &array_size);
    a = malloc(sizeof(int)*array_size);
    printf("Allocated %d bytes at %p\n", sizeof(int)*array_size, a); /* we want to know, aren't we? */
    for(i = 0; i < array_size; i++) {
        printf("array[%d]> ", i);
        scanf("%d", &a[i]);
    }
    if(array_size < 2) {
        printf("Array is not serial - consists of only one element\n");
        return 1;
    }
    /* * * * * * * * * * * * * * * * * * * * * * * * *
     * time to check if array is serial or not       *
     * logic is                                      *
     * if a[i] is greater than a[i-1], then continue *
     * else display a message and return             *
     * obviously this would start with i = 1         *
     * * * * * * * * * * * * * * * * * * * * * * * * */
    for(i = 1; i < array_size; ++i) {
        if(a[i-1]>=a[i]) {
            printf("Array is not serial\n");
            return 1;
        }
    }
    printf("Array is serial\n");
    free(a); /* cleaning up */
    return 0;
}
