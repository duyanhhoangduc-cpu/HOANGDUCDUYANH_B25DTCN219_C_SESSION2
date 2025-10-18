#include <stdio.h>
#include <math.h>

int main() {
    // Khai bao va khoi tao gia tri cho 3 bien so nguyen
    int a = 3, b = 4, c = 2;

    // Khai bao bien thuc ket qua
    double S;

    // Kiem tra loi chia cho 0
    if (c == 0) {
        printf("Loi: c = 0, khong the thuc hien phep chia cho 0.\n");
        return 1;
    }
    if (c + 1 == 0) {
        printf("Loi: c + 1 = 0, khong the thuc hien phep chia cho 0.\n");
        return 1;
    }

    // Tinh gia tri bieu thuc S
    S = sqrt(a * a + b * b) / (c + 1.0)
        + (a * b) / (double)c
        - sqrt(fabs(a - b) + c * c);

    // In ket qua ra man hinh
    printf("Gia tri cua S = %.2f\n", S);

    return 0;
}
