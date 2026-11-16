#include <stdio.h>

// Define structure
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    // Read student details
    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Pass structure to function
    display(s);

    return 0;
}