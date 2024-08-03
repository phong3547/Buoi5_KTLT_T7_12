#include <stdio.h>

// Hàm để xuất dãy số Fibonacci có giá trị nhỏ hơn m
void printFibonacciLessThanM(int m) {
    if (m <= 1) {
        printf("Khong co so Fibonacci nao nho hon %d\n", m);
        return;
    }

    int a = 1, b = 1;
    printf("%d ", a);
    while (b < m) {
        printf("%d ", b);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int m;
    printf("Nhap so nguyen duong m: ");
    scanf_s("%d", &m);

    if (m <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else {
        printf("Day so Fibonacci co gia tri nho hon %d la: ", m);
        printFibonacciLessThanM(m);
    }

    return 0;
}
