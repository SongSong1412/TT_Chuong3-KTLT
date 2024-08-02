//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//// Hàm đổi kí tự đầu tiên của mỗi từ thành chữ in hoa và những từ không phải đầu câu sang chữ thường
//void doi_chu_in_hoa(char *str) {
//	// Kiểm tra xem chuỗi có rỗng hay không
//	if (str == NULL || *str == '\0') {
//		return;
//	}
//
//	// Chuyển ký tự đầu tiên của chuỗi sang chữ in hoa
//	str[0] = toupper(str[0]);
//
//	// Lặp qua từng ký tự trong chuỗi
//	for (int i = 1; str[i] != '\0'; i++) {
//		// Nếu gặp ký tự không phải chữ cái thì chuyển sang chữ thường
//		if (!isalpha(str[i])) {
//			str[i] = tolower(str[i]);
//		}
//		else {
//			// Nếu gặp chữ cái và ký tự trước đó là khoảng trắng thì chuyển sang chữ in hoa
//			if (i > 0 && str[i - 1] == ' ') {
//				str[i] = toupper(str[i]);
//			}
//			else {
//				// Nếu không phải trường hợp trên, thì giữ nguyên chữ thường
//				str[i] = tolower(str[i]);
//			}
//		}
//	}
//}
//
//int main() {
//	char chuoi[100];
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//	chuoi[strcspn(chuoi, "\n")] = '\0'; // Xóa ký tự newline
//
//	doi_chu_in_hoa(chuoi);
//	printf("Chuoi sau khi doi: %s\n", chuoi);
//	getchar();
//	return 0;
//}