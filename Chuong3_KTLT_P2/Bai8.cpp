#include <stdio.h>
#include <string.h>

void XoaTu(char str[], char tu[]) {
	char KetQua[100]; // Mảng lưu trữ kết quả
	int i, j = 0;
	int DoDaiStr = strlen(str);
	int DoDaiTu = strlen(tu);
	int BatDauXoa = -1;

	// Tìm vị trí bắt đầu của từ cần xóa
	for (i = 0; i <= DoDaiStr - DoDaiTu; i++) {
		if (strncmp(&str[i], tu, DoDaiTu) == 0) {
			BatDauXoa = i;
			break;
		}
	}

	// Nếu không tìm thấy từ cần xóa, sao chép nguyên chuỗi gốc vào kết quả
	if (BatDauXoa == -1) {
		strcpy(KetQua, str);
	}
	else {
		// Sao chép phần đầu của chuỗi trước từ cần xóa
		for (i = 0; i < BatDauXoa; i++) {
			KetQua[j++] = str[i];
		}

		// Sao chép phần còn lại của chuỗi sau từ cần xóa
		for (i = BatDauXoa + DoDaiTu; i < DoDaiStr; i++) {
			KetQua[j++] = str[i];
		}

		// Thêm ký tự kết thúc chuỗi
		KetQua[j] = '\0';
	}

	// Sao chép ketQua trở lại str
	strcpy(str, KetQua);
}

int main() {
	char str[200];
	char tu[50];

	printf("Nhap chuoi: ");
	gets(str);

	printf("Nhap tu can xoa: ");
	gets(tu);

	XoaTu(str, tu);

	printf("Chuoi sau khi xoa: %s\n", str);

	return 0;
}
