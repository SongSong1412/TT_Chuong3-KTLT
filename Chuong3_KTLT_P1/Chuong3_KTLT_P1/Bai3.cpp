//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char chuoi[100];
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//	chuoi[strcspn(chuoi, "\n")] = '\0'; // Xóa ký tự newline
//
//	// Xóa khoảng trắng thừa
//	char *ptr = chuoi;
//	char *dst = chuoi;
//	while (*ptr) {
//		if (*ptr != ' ') {
//			*dst = *ptr;
//			dst++;
//		}
//		ptr++;
//	}
//	*dst = '\0'; // Đặt ký tự null cho chuỗi mới
//
//	printf("Chuoi sau khi xoa khoang trang thua: %s\n", chuoi);
//	getchar();
//	return 0;
//}