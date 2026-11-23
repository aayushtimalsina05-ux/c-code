#include<stdio.h>
int main() {
    //arthamatic operators
    int a,b=0;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
     int sum = a + b;
    int diff = a - b;
    int mul = a * b;
    int div = a / b;
    
    printf("Difference is %d\n",diff);
    printf("Sum is %d\n",sum);
    printf("Product is %d\n",mul);
    printf("Quotient is %d\n",div);
    
    return 0;
}





