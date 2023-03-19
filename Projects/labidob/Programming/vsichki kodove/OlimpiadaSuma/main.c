#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 20;
    /*
    do
    {
        printf("Enter a number 1 <= X <= 1500: ");
        scanf("%d",&num);
    }
    while(num<1 && num>1500);
    */
    // i j k l
    int count=0;
    /*
    for(int i=1; i<num; i++)
    {
        for(int j=i; j<num; j++)
        {
            for(int k=j; k<num; k++)
            {
                for(int l=k; l<num; l++)
                {
                    if(i+j+k+l==num)
                    {
                        //printf("%d + %d + %d + %d = %d \n",i,j,k,l,num);
                        count++;
                    }

                }
            }
        }
    }
    */

    /*
    l = num - i - j - k
    l>=k

    num - i - j - k >= k
    num - i -j >= 2*k
    k<=(num-i-j)/2
    */

    for(int i=1; i<=num-1; i++)
    {
        for(int j=i; j<=num-i; j++)
        {
            for(int k=j; k<=(num-j-i)/2; k++)
            {
                int l = num - i - j - k;
                // not needed
                //if(l>=k)
                //{
                    //printf("%d + %d + %d + %d = %d \n",i,j,k,l,num);
                    count++;
                //}
            }
        }
    }

    printf("Count = %d \n",count);
}
