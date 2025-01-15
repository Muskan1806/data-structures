#include <stdio.h>
void printBinary(int num) {
    if (num==0) return;
    printBinary(num/2);
    printf("%d",num%2);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Binary representation: ");
    printBinary(number);
    printf("\n");
 return 0;
}
