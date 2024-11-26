#include <stdio.h>

int main() {
    // Duyet tu 1 den 9 de in ra bang cuu chuong cua moi so
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong cua %d:\n", i);

        // In bang cuu chuong cua so i
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        // In dau phan cach giua cac bang cuu chuong
        printf("\n");
    }

    return 0;
}

