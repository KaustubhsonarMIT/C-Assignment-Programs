#include <stdio.h>
#include <time.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getFirstDayOfMonth(int year, int month) {
    struct tm date = {0};
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = 1;
    date.tm_isdst = -1;
    mktime(&date);
    return date.tm_wday; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
}

int main() {
    int year;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter the year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    printf("\nCalendar for the year %d\n", year);

    for (int m = 0; m < 12; m++) {
        printf("\n------------ %s %d ------------\n", months[m], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        int startDay = getFirstDayOfMonth(year, m + 1);

        for (int space = 0; space < startDay; space++) {
            printf("    ");
        }

        for (int day = 1; day <= daysInMonth[m]; day++) {
            printf("%4d", day);
            if ((day + startDay) % 7 == 0) {
                printf("\n");
            }
        }

        if ((daysInMonth[m] + startDay) % 7 != 0) {
            printf("\n");
        }
    }

    return 0;
}