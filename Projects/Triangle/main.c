#include <stdio.h>

struct Triangle
{
    float a;
    float b;
    float c;
};

int exist(struct Triangle *tr, struct Triangle arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        struct Triangle *other = &arr[i];
        if (other!=tr && ((tr->a==other->a*2 && tr->b==other->b*2 && tr->c==other->c*2)
                || (tr->a==other->b*2 && tr->b==other->c*2 && tr->c==other->a*2)
                || (tr->a==other->c*2 && tr->b==other->a*2 && tr->c==other->b*2))) return 1;
    }
    return 0;
}

void reduceTriangleToHalf(struct Triangle *tr){
    tr->a/=2;
    tr->b/=2;
    tr->c/=2;
}

void printTriangle(struct Triangle *tr){
    printf("Triangle: a = %f, b = %f, c = %f\n",tr->a,tr->b,tr->c);
}

void input(struct Triangle arr[], int n){
    for(int i = 0; i < n; i++)
    {
        struct Triangle *tr = &arr[i];
        while(1){
            printf("Triangle %d:\n", i);
            printf("Please enter the first side(1 to 10): ");
            scanf("%f", &tr->a);
            printf("Please enter the second side(1 to 10): ");
            scanf("%f", &tr->b);
            printf("Please enter the third side(1 to 10): ");
            scanf("%f", &tr->c);
            if(tr->a>=1 && tr->a<=10 && tr->b>=1 && tr->b<=10 && tr->c>=1 && tr->c<=10 && tr->a<tr->b+tr->c && tr->b<tr->a+tr->c && tr->c<tr->b+tr->a)
            {
                printf("This triangle exists\n");
                break;
            }
            else printf("This triangle does not exist or the sides are above 10 and below 1\n");
        }
    }
}

int existHalfTriangle(struct Triangle arr[], int n){
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        struct Triangle *tr = &arr[i];
        printf("Triangle %d:\n", i);
        printTriangle(tr);
        if (exist(tr,arr,n)) {
            result = 1;
            printf("Triangle with half of the sides exist\n");
            reduceTriangleToHalf(tr);
            printTriangle(tr);
        }
        else printf("Triangle with half of the sides does not exist\n");
    }
    return result;
}

int main()
{
    struct Triangle arr[5];
    int n;
    printf("How many triangles do you want: ");
    scanf("%d", &n);
    input(arr, n);
    int result = existHalfTriangle(arr, n);
    if (result) printf("There exists at least one such triangle.\n");
    else printf("There doesn't exist such triangle.\n");
}
