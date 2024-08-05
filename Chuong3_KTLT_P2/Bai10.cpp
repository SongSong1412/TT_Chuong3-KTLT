#include <stdio.h>
#include <string.h>

#define MAX 256

void TimKyTuXuatHienNhieuNhat(char str[]) {
	int tanSo[MAX] = { 0 }; // Mảng lưu trữ tần số xuất hiện của các ký tự
	int i;
	int MaxTanSo = 0; // Biến lưu trữ tần số lớn nhất
	char KyTuMax; // Ký tự xuất hiện nhiều nhất

	// Tính tần số xuất hiện của từng ký tự
	for (i = 0; str[i] != '\0'; i++) {
		tanSo[(unsigned char)str[i]]++;
	}

	// Tìm ký tự có tần số xuất hiện nhiều nhất
	for (i = 0; i < MAX; i++) {
		if (tanSo[i] > MaxTanSo) {
			MaxTanSo = tanSo[i];
			KyTuMax = (char)i;
		}
	}

	// Hiển thị kết quả
	if (MaxTanSo > 0) {
		printf("Ky tu xuat hien nhieu nhat: '%c' voi %d lan\n", KyTuMax, MaxTanSo);
	}
	else {
		printf("Khong co ky tu nao trong chuoi.\n");
	}
}

int main() {
	char str[200];

	printf("Nhap chuoi: ");
	gets(str);

	TimKyTuXuatHienNhieuNhat(str);

	return 0;
}
