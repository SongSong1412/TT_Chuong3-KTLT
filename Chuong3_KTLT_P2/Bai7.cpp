#include <stdio.h>
#include <string.h>

void ChenTu(char str[], char tu[], int viTri) {
	char KetQua[100]; 
	int i, j;
	int DoDaiStr = strlen(str);
	int DoDaiTu = strlen(tu);

	// Sao chép phần đầu của chuỗi str vào ketQua
	for (i = 0; i < viTri; i++) {
		KetQua[i] = str[i];
	}

	// Sao chép tu vào ketQua tại vị trí viTri
	for (j = 0; j < DoDaiTu; j++) {
		KetQua[i + j] = tu[j];
	}

	// Sao chép phần còn lại của chuỗi str vào ketQua sau khi chèn tu
	for (i = viTri; i < DoDaiStr; i++) {
		KetQua[i + DoDaiTu] = str[i];
	}

	// Thêm ký tự kết thúc chuỗi
	KetQua[DoDaiStr + DoDaiTu] = '\0';

	// Sao chép ketQua trở lại str
	strcpy(str, KetQua);
}

int main() {
	char str[200];
	char tu[50];
	int viTri;

	printf("Nhap chuoi: ");
	gets(str);

	printf("Nhap tu can chen: ");
	gets(tu);

	printf("Nhap vi tri can chen: ");
	scanf("%d", &viTri);

	ChenTu(str, tu, viTri);

	printf("Chuoi sau khi chen: %s\n", str);

	return 0;
}
