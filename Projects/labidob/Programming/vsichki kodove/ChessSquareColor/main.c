#include <stdio.h>
#include <stdlib.h>

int main()
{
    char label;
    scanf("%c ",&label);
    int rank;
    scanf("%d",&rank);
    int num;
    if (rank<1 || rank>8)
    {
        printf("Error");
        return;
    }
    if (label>='A' && label<='H') num = label - 'A' + 1;
    else if (label>='a' && label<='h') num = label - 'a' + 1;
    else
    {
        printf("Error");
        return;
    }
    int result =  num + rank;
    if(result%2==0) printf("dark\b");
    else printf("light\n");


}
