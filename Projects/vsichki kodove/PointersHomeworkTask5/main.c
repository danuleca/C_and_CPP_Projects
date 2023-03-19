#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

int is_palindrome_recursion(char * start, char * end)
{
    if(start>end) return 1;
    if(*start!=*end) return 0;
    return is_palindrome_recursion(start+1, end-1);
}

int is_palindrome(char * start, char * end)
{
    while(start<end){
        if (*start!=*end) return 0;
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[SIZE] = "abcdcba";
    int len = strlen(str);
    //printf("%d\n", len);
    int result = is_palindrome(str, str+len-1);
    if(result) printf("The word is a palindrome.\n");
    else printf("The word isn't a palindrome.\n");
    result = is_palindrome_recursion(str, str+len-1);
    if(result) printf("The word is a palindrome.\n");
    else printf("The word isn't a palindrome.\n");
}
