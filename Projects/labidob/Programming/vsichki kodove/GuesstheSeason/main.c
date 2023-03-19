#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *spring = "Spring";
    char *summer = "Summer";
    char *autumn = "Autumn";
    char *winter = "Winter";
    char month[20];
    scanf("%s",month);
    int date;
    scanf("%d",&date);
    char *season;
    if (strcmp(month,"January")==0) season = winter;
    else if (strcmp(month,"February")==0) season = winter;
    else if (strcmp(month,"March")==0) season = (date<20) ? winter : spring;
    else if (strcmp(month,"April")==0) season = spring;
    else if (strcmp(month,"May")==0) season = spring;
    else if (strcmp(month,"June")==0) season = (date<21) ? spring : summer;
    else if (strcmp(month,"July")==0) season = summer;
    else if (strcmp(month,"August")==0) season = summer;
    else if (strcmp(month,"September")==0) season = (date<22) ? summer : autumn;
    else if (strcmp(month,"October")==0) season = autumn;
    else if (strcmp(month,"November")==0) season = autumn;
    else if (strcmp(month,"December")==0) season = (date<21) ? autumn : winter;
    else{
       printf("Error");
       return 0;
    }
    printf("%s\n",season);
}
