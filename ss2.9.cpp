#include <stdio.h>
#include <math.h>   // Thu vien dung ham sqrt() va pow()

int main() {
    int a = 3;      // Bien so nguyen a
    int b = 2;      // Bien so nguyen b
    int c = 1;      // Bien so nguyen c

    // Tinh gia tri bieu thuc: A = a³ + b² + 2c + v(a + b - c)
    double A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    // In ket qua ra man hinh
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("Gia tri cua bieu thuc A la: %.2f\n", A);

    return 0;
}

