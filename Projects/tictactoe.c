#include <stdio.h>
#include <stdlib.h>

/*void hod_na_igracha(void)
{
    int i, j;
    printf("Koordinati za hoda: ");
    scanf("%d%%d", &i, &j);
    i--;
    j--;

    if(arr[x][y]!= ' ')
    {
        printf("Nevaliden hod!\n");
    }
}
*/
int main ()
{
    int iswin = 1,place;
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++, place++)
        {
            printf(" %d", place);
        }
        printf("\n");
    }
}
