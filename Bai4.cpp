#include <stdio.h>

#define MAX_N 100

// Hàm tính An theo đệ quy có lưu trữ cho phần a
int calculateA(int n, int memo[]) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    if (memo[n] != -1) return memo[n]; // Nếu đã tính trước thì trả về kết quả đã lưu

    memo[n] = 2 * calculateA(n - 1, memo) - 3 * calculateA(n - 2, memo) - calculateA(n - 3, memo);
    return memo[n];
}

// Hàm tính An theo đệ quy có lưu trữ cho phần b
int calculateB(int n, int memo[]) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    if (memo[n] != -1) return memo[n]; // Nếu đã tính trước thì trả về kết quả đã lưu

    memo[n] = 2 * calculateB(n - 1, memo) + calculateB(n - 2, memo) - 3 * calculateB(n - 3, memo);
    return memo[n];
}

int main() {
    int choice, n;
    do {
        printf("\nChon phan tinh toan:\n");
        printf("1. Day so phan a (An = 2An-1 – 3An-2 – An-3)\n");
        printf("2. Day so phan b (An+3 = 2An+2 + An+1 - 3An)\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon (1, 2 hoac 3): ");
        scanf_s("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Nhap so nguyen duong n: ");
            scanf_s("%d", &n);

            if (n >= MAX_N) {
                printf("Gia tri n qua lon, vui long nhap n nho hon %d\n", MAX_N);
                continue;
            }

            int memo[MAX_N];
            for (int i = 0; i < MAX_N; i++) {
                memo[i] = -1; // Khởi tạo giá trị chưa tính
            }

            if (choice == 1) {
                if (n >= 0) {
                    printf("So hang thu %d cua day la: %d\n", n, calculateA(n, memo));
                }
                else {
                    printf("Gia tri n khong hop le, vui long nhap n >= 0\n");
                }
            }
            else if (choice == 2) {
                if (n > 0) {
                    printf("So hang thu %d cua day la: %d\n", n, calculateB(n, memo));
                }
                else {
                    printf("Gia tri n khong hop le, vui long nhap n > 0\n");
                }
            }
        }
        else if (choice != 3) {
            printf("Lua chon khong hop le.\n");
        }
    } while (choice != 3);

    printf("Chuong trinh ket thuc.\n");
    return 0;
}
