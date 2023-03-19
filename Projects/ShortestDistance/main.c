#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

const int MAX_SIZE = 100;
int main()
{
    double x[MAX_SIZE],y[MAX_SIZE],z[MAX_SIZE];
    printf("How many points? ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter x value %d: ",i);
        scanf("%lf",&x[i]);
        printf("Enter y value %d: ",i);
        scanf("%lf",&y[i]);
        printf("Enter z value %d: ",i);
        scanf("%lf",&z[i]);
    }
    double px,py,pz;
    printf("Enter point value X: ");
    scanf("%lf",&px);
    printf("Enter point value Y: ");
    scanf("%lf",&py);
    printf("Enter point value Z: ");
    scanf("%lf",&pz);

    double minDistance = DBL_MAX;
    int minIndex = -1;
    for(int i=0;i<n;i++)
    {
        double distance = sqrt(pow(x[i],2) + pow(y[i],2) + pow(z[i],2));
        if (distance<minDistance)
        {
            minDistance = distance;
            minIndex = i;
        }

    }
    printf("Nearest point is %d and the distance is %lf",minIndex,minDistance);
}
