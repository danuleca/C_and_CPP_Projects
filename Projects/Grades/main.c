#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    float sum=0,grade;
    printf("Enter Grade(type -1 for end):");
    scanf("%f",&grade);
    while(grade!=-1)
    {
        if(grade>=2 && grade<=6)
        {
            count++;
            sum+=grade;
        }
        printf("Enter Grade(type -1 for end):");
        scanf("%f",&grade);
    }
    if(count==0) printf("No grades entered!\n");
    else
    {
        float average=sum/count;
        printf("Average of the grades: %.2f",average);
    }
}
