#include <stdio.h>


//khai bao ham cong

int tong(int a, int b){
    return a + b;

}
int hieu(int a ,int b) {
return a - b;
}
int main() {
    int a, b, tong1,hieu1, luaChon;
   tong1 = tong( a,  b);
   hieu1 = hieu( a,  b);
    printf("So thu nhat la : ");
    scanf("%d", &a);
    printf("So thu hai la : ");
    scanf("%d", &b);
    printf("Lua chon cua ban la(1|2|3|4) \n");
    scanf("%d", &luaChon);
    if (luaChon == 1) {
        printf("Chon phep cong .");
        printf("Tong cua hai so la : ");printf("%d",tong1);
    }  else if (luaChon == 2) {
        printf("Chon phep tru .");
        printf("Hieu cua hai so la : ");printf("%d",hieu1);
    }   else {
        printf("Lua chon sai .");
    }

    return 0;
}
