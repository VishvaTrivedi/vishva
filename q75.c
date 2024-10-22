#include <stdio.h>

#define STUDENTS 10
#define SUBJECTS 3

int main() {
    int rollNos[STUDENTS];
    int marks[STUDENTS][SUBJECTS];
    int totalMarks[STUDENTS] = {0};
    int highestMarks[SUBJECTS] = {0};
    int highestRollNo[SUBJECTS] = {0};
    int highestTotalMarks = 0;
    int studentWithHighestTotal = 0;

    // Read the data for each student
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &rollNos[i]);
        printf("Enter marks for student %d in Subject 1, 2, and 3: ", rollNos[i]);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j]; // Calculate total marks
            // Update highest marks for each subject
            if (marks[i][j] > highestMarks[j]) {
                highestMarks[j] = marks[i][j];
                highestRollNo[j] = rollNos[i];
            }
        }
    }

    // Determine the student with the highest total marks
    for (int i = 0; i < STUDENTS; i++) {
        if (totalMarks[i] > highestTotalMarks) {
            highestTotalMarks = totalMarks[i];
            studentWithHighestTotal = rollNos[i];
        }
    }

    // Output total marks for each student
    printf("\nTotal marks obtained by each student:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student Roll No %d: Total Marks = %d\n", rollNos[i], totalMarks[i]);
    }

    // Output highest marks in each subject
    printf("\nHighest marks in each subject:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: Highest Marks = %d (Roll No %d)\n", j + 1, highestMarks[j], highestRollNo[j]);
    }

    // Output student with the highest total marks
    printf("\nStudent with the highest total marks: Roll No %d with Total Marks = %d\n",
           studentWithHighestTotal, highestTotalMarks);

    return 0;
}