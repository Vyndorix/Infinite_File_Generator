#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 900000000000000; i++) {
        char *filename = malloc(20 * sizeof(char));
        sprintf(filename, "file_%d.txt", i);
        FILE *fp = fopen(filename, "w");
        if (fp == NULL) {
            printf("Failed to create file %s\n", filename);
            free(filename);
            exit(1);
        }
        fprintf(fp, "Lots of files");
        fclose(fp);
        free(filename);
    }
    return 0;
}
