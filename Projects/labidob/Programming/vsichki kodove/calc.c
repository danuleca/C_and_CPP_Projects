#include <stdio.h>

int main()
{
    int in;
    char ch[100];
    float end=0,num1,num2;
    scanf("%f",num1);
    scanf("%[^=;+;-;/;*;]s",ch);
    if(ch!='=')scanf("%f",&num2);
    in = (int)ch;
    if(ch!='=')
    {
    switch (in)
    {
    case '+':
        end=end+num1+num2;
        break;
        case '-':
            end=end-num1-num2;
            break;
        }
    }
    printf("%f",end);
  	return 0;
}
