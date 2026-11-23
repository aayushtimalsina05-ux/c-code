#include<stdio.h>
int main() {
    // arithmetic operators
    int a,b;
    float result;
    char op;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    result=(op == '+') *(a+b) +
           (op == '-') *(a-b) +
           (op == '*') *(a*b) +
           (op == '/') *(a/b) +
           (op == '%') *(a%b);
printf("Result is: %.2f\n", result);
    return 0;
}


