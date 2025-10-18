#include <stdio.h>

int main() {
    int number = 12345;     // Khai bao va khoi tao bien number
    int n = number;         // Bien tam de xu ly
    int result = 0;         // Bien luu so dao nguoc

    while (n > 0) {
        int digit = n % 10;        // Lay chu so cuoi cung
        result = result * 10 + digit; // Them chu so vao ket qua (dao nguoc thu tu)
        n /= 10;                   // Bo chu so cuoi
    }

    // In ket qua ra man hinh
    printf("Number goc: %d\n", number);
    printf("Number dao nguoc: %d\n", result);

    return 0;
}

