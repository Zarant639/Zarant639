#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x = 5;
int z = (int)pow(2, 5);
    int main(void) {
        
    //Files
        FILE *file = fopen("number.txt", "w");
        if (file == NULL) {
            printf("File error\n");
            return 1;
        }
            fprintf(file,"%d", "z");
            fprintf(stdout, "Succesful\n", "z");
            fclose(file);
            
    //Memory
    int *arr = malloc(x * sizeof(int));
        if (arr = NULL) {
            printf("Memory eror\n");
            return 1;
        }
            printf("%d", z);
            free(arr);
            return 0;
}
