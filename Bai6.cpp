#include <stdio.h>

// Hàm đệ quy để đếm số chữ số của số nguyên dương n
int countDigitsRecursive(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigitsRecursive(n / 10);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else {
        // Trường hợp đặc biệt khi n = 0
        if (n == 0) {
            printf("So chu so cua %d la: 1\n", n);
        }
        else {
            printf("So chu so cua %d la: %d\n", n, countDigitsRecursive(n));
        }
    }

    return 0;
}
