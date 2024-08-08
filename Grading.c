#include <stdio.h>
#include <string.h>

// Function to calculate grade and compliment based on marks
void calculateGrade(int marks, char *grade, char *compliment) {
    if (marks >= 70) {
        *grade = 'A';
        strcpy(compliment, "Excellent");
    } else if (marks >= 60) {
        *grade = 'B';
        strcpy(compliment, "Well done");
    } else if (marks >= 50) {
        *grade = 'C';
        strcpy(compliment, "Good");
    } else if (marks >= 60) {
        *grade = 'D';
        strcpy(compliment, "Pass");
    } else {
        *grade = 'E';
        strcpy(compliment, "Supplimentary");
    }
}

int main() {
    int numSubjects;

    // Input number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    int marks[numSubjects];
    char grades[numSubjects];
    char compliments[numSubjects][50]; // Increased size for longer compliments

    // Input marks for each subject
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        calculateGrade(marks[i], &grades[i], compliments[i]);
    }

    // Print transcript
    printf("\nTranscript:\n");
    printf("Subject\tMarks\tGrade\tCompliment\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("%d\t%d\t%c\t%s\n", i + 1, marks[i], grades[i], compliments[i]);
    }

    return 0;
}
