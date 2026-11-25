#include <stdio.h>
#include <string.h>

int main()
{
    char email[] = "student@gmail.com";
    char password[] = "123456";

    char correct_email[] = "student@gmail.com";
    char correct_password[] = "123456";

    printf("GMAIL LOGIN\n");

    if (strcmp(email, correct_email) == 0 &&
        strcmp(password, correct_password) == 0)
    {
        printf("Login Successful!\n");
        printf("Welcome to Gmail.");
    }
    else
    {
        printf("Invalid Email or Password.");
    }

    return 0;
}