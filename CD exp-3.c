#include<stdio.h>
#include<string.h>
char input[100];
int idx = 0;
int match(char terminal) {
    if(input[idx] == terminal) {
        idx++;
        return 1;
    }
    return 0;
}
int A()
{
    if(match('a')) 
    {
        if(A()) 
        {
            return 1;
        }
        return 1;
    }
    return 1;
}
int B()
{
    if(match('b')) 
    {
        if(B()) 
        {
            return 1;
        }
        return 1;
    }
    return 1;
}
int S()
{
    if(A() && B()) 
    {
        return 1;
    }
    return 0;
}
int main()
{
    printf("Enter the string: ");
    scanf("%s", input);
    if(S() && input[idx] == '\0') 
    {
        printf("String is accepted\n");
    }
    else 
    {
        printf("String is rejected\n");
    }
    return 0;
}
