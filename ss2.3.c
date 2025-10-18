#include <stdio.h>

int main() {
    int a = 20;                   // Khai bao va khoi tao bien so nguyen a
    int b = 5;                    // Khai bao va khoi tao bien so nguyen b

    int tong = a + b;             // Tinh tong cua a va b
    int hieu = a - b;             // Tinh hieu cua a va b
    int tich = a * b;             // Tinh tich cua a va b
    int thuong = a / b;           // Tinh thuong cua a va b (chia lay phan nguyen)

    // In ket qua ra man hinh
    printf("Tong cua %d va %d la: %d\n", a, b, tong);
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu);
    printf("Tich cua %d va %d la: %d\n", a, b, tich);
    printf("Thuong cua %d va %d la: %d\n", a, b, thuong);

    return 0;
}

