#include <stdio.h>

// Hàm tìm giá trị phần tử thứ n của cấp số cộng
int capSoCong(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return capSoCong(a, r, n - 1) + r;
    }
}

int main() {
    int a, r, n;
    printf("Nhap hang dau a: ");
    scanf_s("%d", &a);
    printf("Nhap cong sai r: ");
    scanf_s("%d", &r);
    printf("Nhap chi so n: ");
    scanf_s("%d", &n);

    int un = capSoCong(a, r, n);
    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, un);

    return 0;
}
