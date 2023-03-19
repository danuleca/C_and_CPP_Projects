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

struct Grade{
    float value;
    enum Subject subject;
};

void print_grade(struct Grade *grade)
{
    printf("%s: %s %.2f\n",subjectName[grade->subject], gradeToString(grade->value), grade->value);
}

int main()
{
    struct Grade grade = {6, English};
    print_grade(&grade);
}
