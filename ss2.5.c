#include <stdio.h>

int main() {
    int a = 5;             // Bien so nguyen thu nhat
    int b = 8;             // Bien so nguyen thu hai
    float c = 3.5;         // Bien so thuc

    float tongThuc = a + b + c;   // Tinh tong cua ca 3 so, luu vao bien float
    int tongNguyen = a + b + (int)c; // Tinh tong phan nguyen cua 3 so, ep kieu c ve int

    // In ket qua ra man hinh
    printf("So nguyen 1: %d\n", a);
    printf("So nguyen 2: %d\n", b);
    printf("So thuc: %.2f\n", c);
    printf("Tong (kieu float): %.2f\n", tongThuc);
    printf("Tong phan nguyen (kieu int): %d\n", tongNguyen);

    return 0;
}

