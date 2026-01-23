#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    // USe User-Defined Functions (UDFs) and GLOBAL VARIABLES
    // GLOBAL VARIABLES are declared outside the main() and are accessible to all functions

    void getRecord();
    void display();
    float avg(int a, int b, int c);
    int main(){
        
        getRecord();

        return 0;
    }

    void getRecord(){
        int i, students;
        char name[students][50];
        float average[i];
        int q1[i], q2[i], q3[i];

        printf("Enter your name: ");
        scanf(" %[^\n]", name[i]);     //always remember that the varaible like name/words don't need '&' in scanf

        printf("Score of Quiz 1: ");
        scanf(" %d", &q1[i]);
        printf("Score of Quiz 2: ");
        scanf("%d", &q2[i]);
        printf("Score of Quiz 3: ");
        scanf("%d", &q3[i]);

        average[i] = (q1[i] + q2[i] + q3[i]) / 3.00;

    }
    void display(){
        system ("cls");
        int i, students;
        char name[students][50];
        float average[i];
        int q1[i], q2[i], q3[i];
        

    printf("\n============================================================\n");
    printf("%4s %-15s%-8s%-8s%-8s%-8s%-10s\n", "No.", "Name", "Quiz 1", "Quiz 2", "Quiz 3", "Average", "Remarks");
    printf("==============================================================\n");

    for (i = 0; i < students; i++){
        printf("%4d.) %-15s%-8d%-8d%-8d%-8.2f%-10s\n", i+1, name[i], q1[i], q2[i], q3[i], average[i], (average[i] >= 75.00) ? "Passed" : "Failed" );
    }
    }
    float avg(int a, int b, int c){
        return 0;
    }