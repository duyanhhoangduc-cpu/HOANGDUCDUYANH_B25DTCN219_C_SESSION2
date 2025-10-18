#include <stdio.h>

int main() {
    int a = 5;     // Khoi tao bien a
    int b = 3;     // Khoi tao bien b
    int c = 2;     // Khoi tao bien c
    int d = 1;     // Khoi tao bien d

    int A = a * b - 2 * c + 3 * (a - d); // Tinh gia tri bieu thuc A = a*b - 2c + 3(a-d)

    // In ket qua ra man hinh
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("Gia tri cua bieu thuc A la: %d\n", A);

    return 0;
}

