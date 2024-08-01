//#include <stdio.h>
//
//// Hàm tìm UCLN của hai số nguyên dương a và b
//int UCLN(int a, int b) {
//    if (a == b) {
//        return a;
//    }
//    else if (a > b) {
//        return UCLN(a - b, b);
//    }
//    else {
//        return UCLN(a, b - a);
//    }
//}
//
//int main() {
//    int a, b;
//    printf("Nhap so nguyen duong a: ");
//    scanf_s("%d", &a);
//    printf("Nhap so nguyen duong b: ");
//    scanf_s("%d", &b);
//
//    int ucln = UCLN(a, b);
//    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
//
//    return 0;
//}
