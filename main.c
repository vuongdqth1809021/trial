#include <stdio.h>




int main() {
    int num;
    printf("vui long nhap mot so:");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("number is even");
    }
    return 0;
}