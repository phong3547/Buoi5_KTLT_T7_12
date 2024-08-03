#include <stdio.h>

#define MAX_N 100

// Hàm đệ quy có lưu trữ để tính x_n
int calculateX(int n, int memo[]) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (memo[n] != -1) return memo[n]; // Nếu đã tính trước thì trả về kết quả đã lưu

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (n - i) * calculateX(i, memo);
    }

    memo[n] = sum;
    return memo[n];
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    if (n >= MAX_N) {
        printf("Gia tri n qua lon, vui long nhap n nho hon %d\n", MAX_N);
        return 1;
    }

    int memo[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        memo[i] = -1; // Khởi tạo giá trị chưa tính
    }

   printf("So hang thu %d cua day la: %d\n", n, calculateX(n, memo));

    return 0;
}
