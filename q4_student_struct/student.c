/*
 * Day 3 Exercise 4: Pointers to Structs - Student Management
 *
 * Implement the student struct and update_grade function as described in tutorial Step 4.
 *
 * TODO:
 * 1. Define the Student struct with char name[20]; int grade;
 * 2. Implement update_grade(Student *s, int new_grade) to change the grade using ->
 * 3. In main:
 *    - Create a Student: name "Alice", grade 80
 *    - Print initial: "Name: Alice, Grade: 80"
 *    - Call update_grade(&student, 90)
 *    - Print updated: "Name: Alice, Grade: 90"
 *
 * Expected output:
 * Initial: Name: Alice, Grade: 80
 * Updated: Name: Alice, Grade: 90
 */

#include <stdio.h>
#include <string.h>
#include "student.h"

void update_grade(Student *s, int new_grade) {
    s->grade = new_grade;
}

int main() {
    printf("Exercise 4: Student Struct with Pointers\n");
    
    Student student;
    strcpy(student.name, "Alice");
    student.grade = 80;

    printf("Initial: Name: %s, Grade: %d\n", student.name, student.grade);

    update_grade(&student, 90);

    printf("Updated: Name: %s, Grade: %d\n", student.name, student.grade);
    
    if(student.grade == 90){
    printf("Grade updated! ✓\n");
    }

    return 0;
}

