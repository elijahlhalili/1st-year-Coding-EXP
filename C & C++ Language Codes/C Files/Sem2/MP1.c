#include <stdio.h>


int main ()
{

    int i, students;
    char name[students][50];
    float average[i];
    int q1[i], q2[i], q3[i];

    printf("Enter number of students: ");
    scanf("%d", &students);
    
    for (i = 0; i < students; i++){

        

        
        printf("Enter your name: ");
        scanf(" %[^\n]s", name[i]);

        printf("Score of Quiz 1: ");
        scanf(" %d", &q1[i]);
        printf("Score of Quiz 2: ");
        scanf("%d", &q2[i]);
        printf("Score of Quiz 3: ");
        scanf("%d", &q3[i]);

        average[i] = (q1[i] + q2[i] + q3[i]) / 3.0;

    }

    printf("\n=========================================================\n");
    printf("%-15s%-8s%-8s%-8s%-8s%-10s\n", "Name", "Quiz 1", "Quiz 2", "Quiz 3", "Average", "Remarks");
    printf("===========================================================\n");

    for (i = 0; i < students; i++){
        printf("%-15s%-8d%-8d%-8d%-8.2f%-10s\n", name[i], q1[i], q2[i], q3[i], average[i], (average[i] >= 75.00) ? "Passed" : "Failed" );
    }


    return 0;
}