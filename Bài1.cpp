//#include <stdio.h>
//#include <math.h>
//
//// 1. Ham tinh S(n) = 1 + 2 + 3 + ... + n
//int tinh_sum_dequy(int n) {
//    if (n == 1) return 1;
//    return n + tinh_sum_dequy(n - 1);
//}
//
//int tinh_sum_khudequy(int n) {
//    int tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += i;
//    }
//    return tong;
//}
//
////2. Ham tinh S(n) = √5 + √5 + ... + √5 (co n dau can)
//double tinh_sqrt_sum_dequy(int n) {
//    if (n == 1) return sqrt(5);
//    return sqrt(5) + tinh_sqrt_sum_dequy(n - 1);
//}
//
//double tinh_sqrt_sum_khudequy(int n) {
//    double tong = 0;
//    for (int i = 0; i < n; i++) {
//        tong += sqrt(5);
//    }
//    return tong;
//}
//
////3. Ham tinh S(n) = 1/2 + 2/3 + ... + n/(n + 1)
//double tinh_PS_sum_dequy(int n) {
//    if (n == 1) return 1.0 / 2;
//    return (double)n / (n + 1) + tinh_PS_sum_dequy(n - 1);
//}
//
//double tinh_PS_sum_khudequy(int n) {
//    double tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += (double)i / (i + 1);
//    }
//    return tong;
//}
//
////4. Ham tinh S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)
//double tinh_PSL_sum_dequy(int n) {
//    if (n == 1) return 1.0 / 1;
//    return (double)1 / (2 * n - 1) + tinh_PSL_sum_dequy(n - 1);
//}
//
//double tinh_PSL_sum_khudequy(int n) {
//    double tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += (double)1 / (2 * i - 1);
//    }
//    return tong;
//}
//
////5. Ham tinh S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n + 1)
//int tinh_product_sum_dequy(int n) {
//    if (n == 1) return 1 * 2;
//    return n * (n + 1) + tinh_product_sum_dequy(n - 1);
//}
//
//int tinh_product_sum_khudequy(int n) {
//    int tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += i * (i + 1);
//    }
//    return tong;
//}
//
////6. Ham tinh giai thua
//double tinh_GT(int n) {
//    double giai_thua = 1;
//    for (int i = 1; i <= n; i++) {
//        giai_thua *= i;
//    }
//    return giai_thua;
//}
//
//// Ham tinh S(n) = 1*2!/2 + √3 + 2*3!/3 + √4 + ... + n*(n + 1)!/(n + 1) + √(n + 2)
//double tinh_GT_sum_dequy(int n) {
//    if (n == 1) return 1 * tinh_GT(2) / 2.0 + sqrt(3);
//    return (n * tinh_GT(n + 1) / (n + 1)) + sqrt(n + 2) + tinh_GT_sum_dequy(n - 1);
//}
//
//double tinh_GT_sum_khudequy(int n) {
//    double tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += (i * tinh_GT(i + 1) / (i + 1)) + sqrt(i + 2);
//    }
//    return tong;
//}
//
////7. Ham tinh S(n) = 1 + √1 + 2/2 + √3! + 3/3 + √4! + ... + n/n + √(n + 1)!
//double tinh_can_sum_dequy(int n, int i) {
//    if (i > n) return 0;
//    return (double)i / i + sqrt(tinh_GT(i + 1)) + tinh_can_sum_dequy(n, i + 1);
//}
//
//double tinh_can_sum_khudequy(int n) {
//    double tong = 0;
//    for (int i = 1; i <= n; i++) {
//        tong += (double)i / i + sqrt(tinh_GT(i + 1));
//    }
//    return tong;
//}
//
//void hien_thi_menu() {
//    printf("Menu:\n");
//    printf("1. Tinh S(n) = 1 + 2 + 3 + ... + n\n");
//    printf("2. Tinh S(n) = √5 + √5 + ... + √5 (co n dau can)\n");
//    printf("3. Tinh S(n) = 1/2 + 2/3 + ... + n/(n + 1)\n");
//    printf("4. Tinh S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)\n");
//    printf("5. Tinh S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n + 1)\n");
//    printf("6. Tinh S(n) = 1*2!/2 + √3 + 2*3!/3 + √4 + ... + n*(n + 1)!/(n + 1) + √(n + 2)\n");
//    printf("7. Tinh S(n) = 1 + √1 + 2/2 + √3! + 3/3 + √4! + ... + n/n + √(n + 1)!\n");
//    printf("0. Thoat\n");
//}
//
//int main() {
//    int lua_chon, n;
//    while (1) {
//        hien_thi_menu();
//        printf("Chon mot tuy chon: ");
//        scanf_s("%d", &lua_chon);
//
//        if (lua_chon == 0) {
//            break;
//        }
//
//        if (lua_chon >= 1 && lua_chon <= 7) {
//            printf("Nhap gia tri n: ");
//            scanf_s("%d", &n);
//        }
//
//        switch (lua_chon) {
//        case 1:
//            printf("S(%d) theo de quy = %d\n", n, tinh_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %d\n", n, tinh_sum_khudequy(n));
//            break;
//        case 2:
//            printf("S(%d) theo de quy = %.2f\n", n, tinh_sqrt_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %.2f\n", n, tinh_sqrt_sum_khudequy(n));
//            break;
//        case 3:
//            printf("S(%d) theo de quy = %.2f\n", n, tinh_PS_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %.2f\n", n, tinh_PS_sum_khudequy(n));
//            break;
//        case 4:
//            printf("S(%d) theo de quy = %.2f\n", n, tinh_PSL_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %.2f\n", n, tinh_PSL_sum_khudequy(n));
//            break;
//        case 5:
//            printf("S(%d) theo de quy = %d\n", n, tinh_product_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %d\n", n, tinh_product_sum_khudequy(n));
//            break;
//        case 6:
//            printf("S(%d) theo de quy = %.2f\n", n, tinh_GT_sum_dequy(n));
//            printf("S(%d) theo khu de quy = %.2f\n", n, tinh_GT_sum_khudequy(n));
//            break;
//        case 7:
//            printf("S(%d) theo de quy = %.2f\n", n, tinh_can_sum_dequy(n, 1));
//            printf("S(%d) theo khu de quy = %.2f\n", n, tinh_can_sum_khudequy(n));
//            break;
//        default:
//            printf("Lua chon khong hop le. Vui long chon lai.\n");
//            break;
//        }
//    }
//
//    return 0;
//}
