#include <stdio.h>
#include <stdlib.h>

//khai bao cac ham

//int tong(int a, int b){
//    return a + b;
//
//}
//int hieu(int a ,int b) {
//    return a - b;
//}
//float thuong(int  a ,int b) {
//    if (b == 0) {
//        printf("phep tinh bi sai \n" );
//        exit(1);
//}
//    return (float) a / b;
//
//}
//int tich(int a ,int b) {
//    return a * b;
//}
//void menu() {
//    printf("-------------------------------------------------------------------------------------------------------\n");
//    printf("+.Phep cong \n");
//    printf("-.Phep tru \n");
//    printf("*.Phep chia \n");
//    printf(":.Phep nhan \n");
//    printf("Go 'exit' neu muon thoat chuong trinh\n");
//
//}
//
//int main() {

//    Yêu cầu người dùng nhập hai sô và yêu cầu người dùng lựa chon phép tính .
//    Có các lựa chọn sau : +, -, x,:

//    int a, b;
//    char luaChon;
//    while(1 == 1){
//        menu();
//    printf("Lua chon cua ban:(+|-|x|:) \n");
//    scanf("%c", &luaChon);
//        printf("So thu nhat la: \n");
//        scanf("%d", &a);
//        printf("So thu hai la: \n");
//        scanf("%d", &b);
//
//        switch (luaChon) {
//            case '+':
//                printf("Chon phep cong . \nTong cua hai so %d va %d la %d\n", a, b, tong(a, b));
//                break;
//            case '-':
//                printf("Chon phep tru . \nHieu cua hai so %d va %d la %d\n", a, b, hieu(a, b));
//                break;
//            case 'x':
//                printf("Chon phep chia . \nThuong cua hai so %d va %d la %.2f\n", a, b, thuong(a, b));
//                break;
//            case ':':
//                printf("Chon phep nhan .\nTich cua hai so %d va %d la %d\n", a, b, tich(a, b));
//                break;
//            case 'off':
//                printf("Thoat chuong trinh \n");
//                exit(0);
//
//            default:
//                printf("Khong co lua chon phu hop voi lua chon cua ban \n");
//                break;


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

//    int a, b, luaChon;
//    menu();
//    printf("Lua chon cua ban:");
//    scanf("%d", &luaChon);
//    printf("So thu nhat la : ");
//    scanf("%d", &a);
//    printf("So thu hai la : ");
//    scanf("%d", &b);
//
//    switch (luaChon) {
//        case 1:
//            printf("Chon phep cong .Tong cua hai so %d va %d la %d", a, b, tong(a, b));
//            break;
//        case 2:
//            printf("Chon phep tru .Hieu cua hai so %d va %d la %d", a, b, hieu(a, b));
//            break;
//        case 3:
//            printf("Chon phep chia .Thuong cua hai so %d va %d la %.2f", a, b, thuong(a, b));
//            break;
//        case 4:
//            printf("Chon phep nhan .Tich cua hai so %d va %d la %d", a, b, tich(a, b));
//            break;
//        case 5:
//            printf("Thoat chuong trinh (y/n) ? \n");
//              exit(1);
//            }

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

//        }}}
                int tinhNuaChuViTG(int a, int b, int c) {
                    return (a + b + c) / 2;
                }

                int main() {
                    int a, b, c;

                    printf("Yeu cau nhap 3 canh cua tam giac");
                    scanf("%d", &a);
                    scanf("%d", &b);
                    scanf("%d", &c);
                    if (a < 0) {
                        printf("do dai mot canh tam giac khong the nho hon 0\n");
                        exit(0);
                    }
                    if (b < 0) {
                        printf("Độ dài một cạnh tam giác không thể nhỏ hơn hoặc bằng 0\n");
                        exit(0);
                    }
                    if (c < 0) {
                        printf("Độ dài một cạnh tam giác không thể nhỏ hơn hoặc bằng 0\n”);
                        exit(0);
                    }
                    if (a+b<c) {
                        printf("Tổng hai cạnh của một tam giác luôn phải lớn hơn cạnh còn lại (Theo bất đẳng thức tam giác)\n");
                        exit(0);
                    }
                    if (a+c<b){
                        printf("Tổng hai cạnh của một tam giác luôn phải lớn hơn cạnh còn lại (Theo bất đẳng thức tam giác)\n");
                        exit(0);
                    }
                    if (b+c<a){
                        printf("Tổng hai cạnh của một tam giác luôn phải lớn hơn cạnh còn lại (Theo bất đẳng thức tam giác)\n");
                        exit(0);
                    }
                    printf("Nua chu vi tam giac la %d",tinhNuaChuViTG(a,b,c));
                    return 0;
                }}
