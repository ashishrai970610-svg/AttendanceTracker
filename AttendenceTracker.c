#include <stdio.h>

int main() {
    int totalStudents;
    int attendance[100];   // Array to store attendance (1 = Present, 0 = Absent)
    int i;
    int presentCount = 0, absentCount = 0;

    // Ask user for number of students
    printf("Enter total number of students: ");
    scanf("%d", &totalStudents);

    // Check limit
    if (totalStudents > 100) {
        printf("Maximum limit is 100 students only.\n");
        return 0;
    }

    // Take attendance input
    for (i = 0; i < totalStudents; i++) {
        printf("Is student %d present? (1 = Yes, 0 = No): ", i + 1);
        scanf("%d", &attendance[i]);

        if (attendance[i] == 1) {
            presentCount++;
        } else {
            absentCount++;
        }
    }

    // Display summary
    printf("\n--- Attendance Summary ---\n");
    printf("Total Students: %d\n", totalStudents);
    printf("Present: %d\n", presentCount);
    printf("Absent: %d\n", absentCount);

    return 0;
}
