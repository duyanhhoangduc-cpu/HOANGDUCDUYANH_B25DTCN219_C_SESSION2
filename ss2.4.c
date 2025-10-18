#include <stdio.h>

int main() {
    int chieuDai = 10;                     // Khai bao va khoi tao bien chieu dai hinh chu nhat
    int chieuRong = 5;                     // Khai bao va khoi tao bien chieu rong hinh chu nhat

    int chuVi = 2 * (chieuDai + chieuRong); // Tinh chu vi hinh chu nhat
    int dienTich = chieuDai * chieuRong;    // Tinh dien tich hinh chu nhat

    // In ket qua ra man hinh
    printf("Chieu dai: %d\n", chieuDai);
    printf("Chieu rong: %d\n", chieuRong);
    printf("Chu vi hinh chu nhat: %d\n", chuVi);
    printf("Dien tich hinh chu nhat: %d\n", dienTich);

    return 0;
}

