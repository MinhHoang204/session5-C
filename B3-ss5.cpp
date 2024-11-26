#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Yeu cau nguoi dung nhap vao mot so nguyen duong
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // Kiem tra neu so nhap vao khong phai la so nguyen duong
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong!\n");
    } else {
        // Tinh tong tat ca cac so tu 1 den n
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        // In ket qua ra man hinh
        printf("Tong tat ca cac so tu 1 den %d là: %d\n", n, sum);
    }

    return 0;
}

