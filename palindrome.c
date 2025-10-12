#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#  define SIZE 100

char stack[SIZE];
int top=-1;

void push(char c)
{
    if(top==SIZE-1){
        printf("stack overflowed:");
    }
    else{
        stack[++top]=c;
    }
}
char pop()
{
    if(top==-1)
        return '\0';
    else
        return stack[top--];

}
int main()
{
    char str[SIZE],rev[SIZE];
    int i,len;
    printf("enter the string:");
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<len;i++){
        push(str[i]);
    }
    for(i=0;i<len;i++){
        rev[i]=pop();
        }
        rev[i]='\0';

    if(strcmp(str,rev)==0)
    {
        printf("the string is palindrome",str);
    }
    else{
        printf("the string is not a palindrome",str);
    }
    return 0;
}
