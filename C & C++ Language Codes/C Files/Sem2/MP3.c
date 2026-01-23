#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void getRecord(char n[][50], float a[], float b[], float c[], int *count);
void display(char n[][50], float a[], float b[], float c[], int count);
float avg(float a, float b, float c);

int main() {
    char names[MAX][50];
    float q1[MAX], q2[MAX], q3[MAX];
    int count;

    getRecord(names, q1, q2, q3, &count);
    display(names, q1, q2, q3, count);

    return 0;
}

void getRecord(char n[][50], float a[], float b[], float c[], int *count) {
    int i;

    printf("Enter number of students: ");
    scanf("%d", count);

    for (i = 0; i < *count; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", n[i]); 

        printf("Enter quiz 1 score: ");
        scanf("%f", &a[i]);

        printf("Enter quiz 2 score: ");
        scanf("%f", &b[i]);

        printf("Enter quiz 3 score: ");
        scanf("%f", &c[i]);
    }
}

void display(char n[][50], float a[], float b[], float c[], int count) {
    int i;

    system("cls");

    printf("\n%-20s %-10s %-10s %-10s %-10s\n",
           "Name", "Quiz 1", "Quiz 2", "Quiz 3", "Average");

    for (i = 0; i < count; i++) {
        float average = avg(a[i], b[i], c[i]);

        printf("%-20s %-10.2f %-10.2f %-10.2f %-10.2f\n",
               n[i], a[i], b[i], c[i], average);
    }
}

float avg(float a, float b, float c) {
    return (a + b + c) / 3;
}