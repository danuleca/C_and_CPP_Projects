#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    int num,pr,br=0,br2;

    if((f = fopen("chet.txt", "r")) == NULL)
    {
        printf("Error \n");
        return 0;
    }
    fscanf(f,"%d", &num);
    printf("The number in the file is %d\n",num);
    num--;

    do
    {
        pr=num;
        br=0;
        br2=0;
        do
        {
            if(pr%2==0)
            {
                br++;
            }
            pr=pr/10;
            br2++;
        }
        while(pr>0);

        if(br2==br)
        {
            printf("Result is %d",num);
            f = fopen("chet.txt", "w");
            fprintf(f,"%d",num);
            fclose(f);
            break;

        }

        num--;

    }
    while(num!=0);

    return 0;
}
