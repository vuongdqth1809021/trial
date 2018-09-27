#include <stdio.h>


//khai bao ham cong

int tong(int a, int b){
    return a + b;

}
int hieu(int a ,int b) {
    return a - b;
}
int thuong(int a ,int b) {
    return a / b;
}
int tich(int a ,int b) {
    return a * b;
}
int main() {
    int a, b, luaChon;
    printf("So thu nhat la : ");
    scanf("%d", &a);
    printf("So thu hai la : ");
    scanf("%d", &b);
    printf("Lua chon cua ban la 1 neu la cong ,2 neu la tru ,3 neu la chia ,4 neu la nhan(1|2|3|4) \n");
    scanf("%d", &luaChon);
     if (luaChon == 1) {
        printf("Chon phep cong .");
        printf("Tong cua hai so %d va %d la %d", a, b, tong(a ,b));

    }  else if (luaChon == 2) {
        printf("Chon phep tru .");
        printf("Hieu cua hai so %d va %d la %d", a, b, hieu(a ,b));
    }  else if (luaChon == 3) {
        printf("Chon phep chia .");
        printf("Thuong cua hai so %d va %d la %d", a, b, thuong(a ,b));

         if (b == 0) {
             printf("Phep tinh khong dung");
         }
         else if(luaChon == 4) {
             printf("Chon phep nhan .");
             printf("Tich cua hai so %d va %d la %d", a, b, tich(a ,b));
         }
         if (luaChon > 4) {
             printf()
         }


     }
    return 0;
}
