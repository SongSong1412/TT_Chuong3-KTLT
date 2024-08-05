#include <stdio.h>
#include <string.h>

#define MAX 256

void DemKyTu(char str[]) {
	int TanSo[MAX] = { 0 }; // Mảng lưu trữ tần số xuất hiện của các ký tự
	int i;

	// Tính tần số xuất hiện của từng ký tự
	for (i = 0; str[i] != '\0'; i++) {
		TanSo[(unsigned char)str[i]]++;
	}

	// Hiển thị tần số xuất hiện của các ký tự
	printf("Tan so xuat hien cua tung ky tu:\n");
	for (i = 0; i < MAX; i++) {
		if (TanSo[i] > 0) {
			printf("'%c' : %d\n", i, TanSo[i]);
		}
	}
}

int main() {
	char str[200];

	printf("Nhap chuoi: ");
	gets(str);

	DemKyTu(str);

	return 0;
}
