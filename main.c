#include <stdio.h>
#include <stdlib.h>


//khai bao cac ham

int tong(int a, int b){
    return a + b;

}
int hieu(int a ,int b) {
    return a - b;
}
float thuong(int  a ,int b) {
    if (b == 0) {
        printf("phep tinh bi sai");
        exit(1);
}
    return (float) a / b;
}
int tich(int a ,int b) {
    return a * b;
}
void menu() {
    printf("1.Phep cong \n");
    printf("2.Phep tru \n");
    printf("3.Phep chia \n");
    printf("4.Phep nhan \n");
    printf("5.Thoat chuong trinh \n");
    printf("Lua chon cua ban(1|2|3|4) \n");

}

int main() {
    int a, b, luaChon;
    menu();
    printf("So thu nhat la : ");
    scanf("%d", &a);
    printf("So thu hai la : ");
    scanf("%d", &b);
    printf("Lua chon cua ban:");

    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1:
            printf("Chon phep cong .Tong cua hai so %d va %d la %d", a, b, tong(a, b));
            break;
        case 2:
            printf("Chon phep tru .Hieu cua hai so %d va %d la %d", a, b, hieu(a, b));
            break;
        case 3:
            printf("Chon phep chia .Thuong cua hai so %d va %d la %.2f", a, b, thuong(a, b));
            break;
        case 4:
            printf("Chon phep nhan .Tich cua hai so %d va %d la %d", a, b, tich(a, b));
            break;
        case 5:
            printf("Thoat chuong trinh .Cam on ban da su dung chuong trinh . \n");
            exit(1);
//Với if -----else
//    if (luaChon == 1) {
//        printf("Chon phep cong .");
//        printf("Tong cua hai so %d va %d la %d", a, b, tong(a, b));
//
//    } else if (luaChon == 2) {
//        printf("Chon phep tru .");
//        printf("Hieu cua hai so %d va %d la %d", a, b, hieu(a, b));
//    } else if (luaChon == 3) {
//        printf("Chon phep chia .");
//        printf("Thuong cua hai so %d va %d la %.2f", a, b, thuong( a, b));
//
//
//    } else if (luaChon == 4) {
//        printf("Chon phep nhan .");
//        printf("Tich cua hai so %d va %d la %d", a, b, tich(a, b));
//    }   else if (luaChon == 5) {
//        exit(1);
//    } else {
//        printf("Khong co lua chon nao phu hop voi lua chon cua ban");
//    }
//
//
//
//
//}
    }
}