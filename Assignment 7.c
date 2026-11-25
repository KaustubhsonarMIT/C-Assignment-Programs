#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int sub1, sub2, sub3;
    int total;
    float percentage;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter the roll number, name and marks of 3 subjects for student %d:\n", i + 1);
        scanf("%d %49s %d %d %d", &s[i].rollNo, s[i].name, &s[i].sub1, &s[i].sub2, &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].percentage = s[i].total / 3.0f;
    }

    printf("\n%-10s %-15s %-12s %-12s %-12s %-10s %-10s\n",
           "Roll No", "Name", "Subject: 1", "Subject: 2", "Subject: 3", "Total", "Percentage");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-15s %-12d %-12d %-12d %-10d %-10.2f\n",
               s[i].rollNo, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].total, s[i].percentage);
    }

    return 0;
}