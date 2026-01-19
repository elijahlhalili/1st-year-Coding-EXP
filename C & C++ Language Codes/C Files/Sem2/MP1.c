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
        scanf("%s", &name[i]);

        printf("Score of Quiz 1: ");
        scanf(" %d", &q1[i]);
        printf("Score of Quiz 2: ");
        scanf("%d", &q2[i]);
        printf("Score of Quiz 3: ");
        scanf("%d", &q3[i]);

        average[i] = (q1[i] + q2[i] + q3[i]) / 3.0;

    }

    printf("\n================================================\n");
    printf("Name\tQuiz 1\tQuiz 2\tQuiz 3\tAverage\tRemarks\n");
    printf("================================================\n");

    for (i = 0; i < students; i++){
        printf("%s\t%d\t%d\t%d\t%.2f\t%s\n", name[i], q1[i], q2[i], q3[i], average[i], (average[i] >= 75.00) ? "Passed" : "Failed" );
    }


    return 0;
}