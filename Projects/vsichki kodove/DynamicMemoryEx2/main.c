#include <stdio.h>
#include <stdlib.h>


int main()
{
    //float arr[20] = {1,2,3,4,5,6,7,8,9,10,11.5,12,13,14.6,15,16,17,18,19,20.54};
    float *ptr = calloc(20, sizeof(float));
    printf("%f\n",ptr[3]);
    free(ptr);
    enum Subject {
        Math,
        Literature,
        English,
        Programming,
        Philosophy
    };
    struct Grade {
        double value;
        enum Subject subj;
    };
    struct Grade *grade = calloc(1, sizeof(struct Grade));
    printf("%lf\n",grade->value);
    free(grade);
}
