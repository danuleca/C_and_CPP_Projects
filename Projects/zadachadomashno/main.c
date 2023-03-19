#include <stdio.h>
#include <stdlib.h>

int ddos(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        switch(i)
        {
            case 0: printf("zero ");  break;
            case 1: printf("one ");   break;
            case 2: printf("two ");   break;
            case 3: printf("three "); break;
            case 4: printf("four ");  break;
            case 5: printf("five ");  break;
            case 6: printf("six ");   break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine ");  break;
            default:
                if(i%2==0) printf("even ");
                else printf("odd ");
                break;
        }
    }
    return 0;
}

int main()
{
    int a,b;
    do
    {
        printf("Enter interval A to B: ");
        scanf("%d %d",&a,&b);
    }
    while(a<0 || b<0 || a>b);
    ddos(a,b);
}
