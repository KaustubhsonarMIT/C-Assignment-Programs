#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", srcFile);

    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", srcFile);
        return 1;
    }

    printf("Enter destination file name: ");
    scanf("%99s", destFile);

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}