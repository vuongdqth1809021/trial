#include <stdio.h>


//khai bao ham cong

int tong(int a, int b) {
    int c = a + b;
    return c;

}
int main() {
    int a, b, tong1, luaChon;
    printf("so thu nhat la:");
    scanf("%d", &a);
    printf("so thu hai la");
    scanf("%d", &b);

    tong1 = tong(a, b);
    printf("Tong cua hai so %d va %d la %d", a, b, tong1);
    return 0;
}


