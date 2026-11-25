#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[50];

    int choice;

    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenate\n");
    printf("4. Compare\n");

    choice = 1;

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str1));
            break;

        case 2:
            strcpy(str3, str1);
            printf("Copied String = %s", str3);
            break;

        case 3:
            strcpy(str3, str1);
            strcat(str3, str2);
            printf("Concatenated String = %s", str3);
            break;

        case 4:
            printf("Comparison = %d", strcmp(str1, str2));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}