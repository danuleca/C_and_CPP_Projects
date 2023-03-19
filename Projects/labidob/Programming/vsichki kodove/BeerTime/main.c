#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    fgets(str,10,stdin);
    char *p = strchr(str,'\n');
    if (p) *p='\0';
    int hh,mm,pos;
    char designator[4];
    int len = strlen(str);
    int argsCount = sscanf(str, "%d:%d %s%n", &hh, &mm, designator, &pos);
    int isAm = !strcmp(designator,"AM");
    int isPm = !isAm && !strcmp(designator,"PM");
    if (argsCount != 3 || len!=pos || hh<1 || hh>12 || mm<0 || mm>59 || (!isAm && !isPm)) {
        printf("invalid time\n");
        return 0;
    }
    int hh24 = 0;
    if (isAm) {
        if (hh==12) hh24 = 0;
        else hh24 = hh;
    }
    else {
        if (hh==12) hh24 = hh;
        else hh24 = hh+12;
    }
    printf("%d:%d\n",hh24,mm);
    int mins = hh24*60+mm;
    if ((mins>=13*60 && mins<24*60) || (mins>=0 && mins<3*60)){
        printf("beer time\n");
    }
    else {
        printf("non-beer time\n");
    }

}
