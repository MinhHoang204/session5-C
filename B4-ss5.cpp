#include <stdio.h>

int main() {
    int n;

    // Yeu cau nguoi dung nhap vao mot so nguyen duong tu 1 den 10
    printf("Nhap mot so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    // Kiem tra neu so nhap vao khong nam trong pham vi tu 1 den 10
    if (n < 1 || n > 10) {
        printf("Vui long nhap mot so tu 1 den 10!\n");
    } else {
        // In ra bang cuu chuong tuong ung voi so da nhap
        printf("Bang cuu chuong cua %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}

