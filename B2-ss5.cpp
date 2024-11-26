#include <stdio.h>

int main() {
    int target = 42;  // So cho truoc
    int input;        // Bien luu so nguoi dung nhap vao

    printf("Nhap so cho den khi trung voi so %d: \n", target);

    // Vong lap yeu cau nguoi dung nhap so cho den khi trung voi so cho truoc
    do {
        printf("Nhap so: ");
        scanf("%d", &input);
    } while (input != target);

    printf("Chuc mung! Ban da nhap dung so %d.\n", target);
    
    return 0;
}
