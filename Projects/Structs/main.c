#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    int age;
    char name[50];
};

int main()
{
    struct Student s1,s2;
    struct Student students[50];
    struct Student *p;
    s1.id=101;
    s1.age=17;
    strcpy(s1.name,"Ivan");
    students[30].id=50;
    students[25].age=18;
    strcpy(students[34].name,"Petar");
    printf("%d\n",s1.age);
    p=&s1;
    //(*p).id;
    //p->id;
    printf("age: %d\n",p->age);

}
