#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[3];
    int result=0;
    scanf("%2s",arr);
    int len = strlen(arr);
    if (len==1)
    {
        //char c = arr[0];
        //result = (c>='2' && c<='9') || c=='j' || c=='J' || c=='q' || c=='Q' || c=='k' || c=='K' || c=='a' || c=='A';
        result = strchr("234567890aAkKjJqQ", arr[0])!=NULL;
    }
    else if (len==2) result = !strcmp(arr,"10");
    if(result)
        printf("yes");
    else printf("no");
}
