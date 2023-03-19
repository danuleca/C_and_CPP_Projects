#include <stdio.h>
#include <stdlib.h>

const int SEG_COUNT = 5;

struct Seg
{
    int from;
    int to;
};

int intersect(struct Seg *seg1, struct Seg *seg2)
{
    return seg2->from<=seg1->to && seg1->from<=seg2->to;
}

int main()
{
    struct Seg arr[SEG_COUNT];
    for(int i=0; i<SEG_COUNT; i++)
    {
        int isCorrect = 1;
        do
        {
            printf("Enter the start of the segment %d: ",i);
            scanf("%d",&arr[i].from);
            printf("Enter the end of the segment %d: ",i);
            scanf("%d",&arr[i].to);
            if(arr[i].from>arr[i].to)
            {
                printf("The start is bigger than the end!\n ");
                isCorrect = 0;
            }
        }
        while(!isCorrect);
    }
    int maxCount=0;
    for(int i=0; i<SEG_COUNT; i++)
    {
        int count=0;
        for(int j=0; j<SEG_COUNT; j++)
        {
            if (i!=j && intersect(&arr[i],&arr[j])) count++;
        }
        if(count>maxCount) maxCount = count;
    }
    printf("The most intersected segments are %d\n",maxCount);
}
