//TASK 6 STUDENT GRADE CALCULATOR
//ANUPAM KUMAR VERMA C/C++ INTERNSHIP
//COGNIFYZ TECHNLOGIES
#include <stdio.h>

int main()
{
    // Declare variables to store the number of subjects, total grade, and average grade
    int num_subjects;
    float total_grade, average_grade;

    // Prompt the user to enter the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    // Initialize the total grade to zero
    total_grade = 0;

    // Loop through each subject
    for (int i = 0; i < num_subjects; i++)
    {
        // Declare a variable to store the grade for the subject
        float grade;

        // Prompt the user to enter the grade for the subject
        printf("Enter the grade for subject %d: ", i + 1);
        scanf("%f", &grade);

        // Add the grade to the total grade
        total_grade += grade;
    }

    // Calculate the average grade by dividing the total grade by the number of subjects
    average_grade = total_grade / num_subjects;

    // Display the average grade to the user
    printf("The average grade is %.2f\n", average_grade);

    return 0;
}
