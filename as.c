#include <stdio.h>
int main() {    

    int number1, number2, pro;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    pro = number1 * number2;      
    
    printf("%d * %d = %d", number1, number2, pro);
    return 0;
}

