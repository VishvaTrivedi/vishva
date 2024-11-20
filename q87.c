//WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.
#include <stdio.h>

#define MAX_STUDENTS 10

// Define a structure to hold student information
struct Student {
    char name[100];
    int marks;
};

// Function to read student information
void readStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        // Read the name from user input using fgets
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        // Remove the newline character if present
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
        
        printf("Enter the marks of student %d: ", i + 1);
        // Read the marks from user input
        scanf("%d", &students[i].marks);
        
        // Clear the input buffer
        while (getchar() != '\n');
    }
}

// Function to display information of students with marks greater than 500
void displayStudents(struct Student students[], int size) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
        }
    }
}

int main() {
    // Create an array of Student structures
    struct Student students[MAX_STUDENTS];
    
    // Read information of students
    readStudents(students, MAX_STUDENTS);
    
    // Display information of students with marks greater than 500
    displayStudents(students, MAX_STUDENTS);
    
    return 0;
}