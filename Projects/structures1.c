#include<stdio.h>
#include<string.h>

typedef struct
{
    int num;
    char name[100];
    int marks[20];
    float avr;
} Tstudent;

void printStudents(Tstudent *arr[], int n){
    printf("%-4s%-30s%-10s\n","Num","Name","Avr");
    for(int i = 0; i < n; i++){
        Tstudent *st = arr[i];
        printf("%-4d%-30s%-10f\n",st->num,st->name,st->avr);
    }
}

void sortByAvr(Tstudent *arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[minIdx]->avr > arr[j]->avr) minIdx = j;
        }
        Tstudent *p = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = p;
    }
}

void sortByName(Tstudent *arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[minIdx]->name,arr[j]->name)>0) minIdx = j;
        }
        Tstudent *p = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = p;
    }
}

int main()
{
    Tstudent st[30],*sp[30];
    int n,m;
    printf("Number of students: ");
    scanf("%d",&n);
    printf("Number of grades: ");
    scanf("%d",&m);
    for(int i=0; i<n; i++)
    {
        printf("Num: ");
        scanf("%d",&st[i].num);
        getchar();
        printf("Name: ");
        fgets(st[i].name,sizeof(st[i].name),stdin);
        char *p = strchr(st[i].name,'\n');
        if (p) *p = '\0';
        st[i].avr=0;
        for(int k=0; k<m; k++)
        {
            printf("Mark: ");
            scanf("%d",&st[i].marks[k]);
            st[i].avr+=st[i].marks[k];
        }
        st[i].avr/=m;
        sp[i]=&st[i];
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Sort by name\n");
        printf("2. Sort by average grade\n");
        printf("3. Exit\n");
        printf("Choose operation: ");
        int op;
        scanf("%d", &op);
        switch(op){
        case 1:
            sortByName(sp,n);
            printStudents(sp,n);
            break;
        case 2:
            sortByAvr(sp,n);
            printStudents(sp,n);
            break;
        default:return 0;
        }
    }
    while(1);
}

