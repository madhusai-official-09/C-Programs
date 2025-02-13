#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter the First Integer: ");
    scanf("%d", &num1);
    printf("Enter the Second Integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The Final Value = %d", sum);
    
    return 0;
}