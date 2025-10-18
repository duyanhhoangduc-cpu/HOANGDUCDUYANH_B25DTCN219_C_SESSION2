#include <stdio.h>

int main() {
    int number = 12345;     // Khai bao va khoi tao bien number
    int n = number;         // Bien tam de giu gia tri goc
    int tong = 0;           // Bien luu tong cac chu so

    // Tach tung chu so bang phep chia lay du va chia nguyen
    tong += n % 10;         // Lay chu so cuoi cung
    n /= 10;                // Bo chu so cuoi

    tong += n % 10;         // Lay chu so ke tiep
    n /= 10;

    tong += n % 10;
    n /= 10;

    tong += n % 10;
    n /= 10;

    tong += n % 10;         // Lay chu so dau tien

    // In ket qua ra man hinh
    printf("Number = %d\n", number);
    printf("Tong cac chu so = %d\n", tong);

    return 0;
}

