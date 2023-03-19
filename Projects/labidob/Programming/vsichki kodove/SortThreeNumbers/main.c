#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,t;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    if(d<e){t=d;d=e;e=t;}
    if(e<f){t=e;e=f;f=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    if(d<e){t=d;d=e;e=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}

    if(a<b){t=a;a=b;b=t;}

    printf("%f %f %f %f %f %f",a,b,c,d,e,f);

}
