#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else {
        printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));
    }

    return 0;
}
