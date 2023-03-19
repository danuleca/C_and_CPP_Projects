#include <stdio.h>
#include <stdlib.h>

enum Subject {English, Math, Literature, Programing, Philosophy};
char *subjectName[] = {"English", "Math", "Literature", "Programing", "Philosophy"};

char *gradeToString(float value)
{
    if (value < 3) return "Weak";
    if (value < 3.5) return "Mid";
    if (value < 4.5) return "Good";
    if (value < 4.5) return "Very Good";
    if (value <= 6) return "Excellent";
    return NULL;
}

struct Grade
{
    float value;
    enum Subject subject;
};

struct Student{
    char name[30];
    int number;
    int gradeCount;
    struct Grade grades[100];
};

void print_grade(struct Grade *grade)
{
    printf("%s: %s %.2f\n",subjectName[grade->subject], gradeToString(grade->value), grade->value);
}

void student_print(struct Student *student)
{
    printf("%s %d:\n", student->name, student->number);
    for(int i=0;i<student->gradeCount;i++)
    {
        printf("   ");
        print_grade(&student->grades[i]);
    }
}


int main()
{
    struct Grade grade = {6, English};
    print_grade(&grade);
    struct Student student = {"Angel Angelov", 1, 3, {
        {6, English},
        {5, Math},
        {4, Literature}
    }};
    student_print(&student);
}
