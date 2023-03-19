#include<stdio.h>
#include<string.h>

typedef struct
{
    int num;
    char name[100];
    int marks[20];
    float avr;
} Tstudent;

void printStudents(Tstudent *sp[], int n){
    printf("\n%-4s%-20s%-6s\n","Num","Name","Avr");
    for(int i=0; i<n; i++){
        Tstudent *s = sp[i];
        printf("%-4d%-20s%-6.2f\n",s->num,s->name,s->avr);
    }
}

void sortByAvr(Tstudent *arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
          if (arr[minIdx]->avr>arr[j]->avr) minIdx = j;
        }

        Tstudent *t = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = t;
    }
}

void sortByName(Tstudent *arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
          if (strcmp(arr[minIdx]->name,arr[j]->name)>0) minIdx = j;
        }

        Tstudent *t = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = t;
    }
}

int main()
{
    Tstudent st[30],*sp[30];
    int n,m;
    printf("Number of students=");
    scanf("%d",&n);
    printf("Number of grades=");
    scanf("%d",&m);
    for(int i=0; i<n; i++)
    {
        printf("Num=");
        scanf("%d",&st[i].num);
        getchar();
        printf("Name=");
        fgets(st[i].name,100,stdin);
        char *p = strchr(st[i].name,'\n');
        if(p) *p='\0';
        st[i].avr=0;
        for(int k=0; k<m; k++)
        {
            printf("Mark=");
            scanf("%d",&st[i].marks[k]);
            st[i].avr+=st[i].marks[k];
        }
        st[i].avr/=m;
        sp[i]=&st[i];
    }

    do
    {
        int op;
        printf("\nMenu:\n1. sort by name \n2. sort by avr \n3. exit\nchoose: ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            sortByName(sp,n);
            printStudents(sp,n);
            break;
        case 2:
            sortByAvr(sp,n);
            printStudents(sp,n);
            break;
        default: return 0;
        }
    }
    while(1);
    return 0;
}

