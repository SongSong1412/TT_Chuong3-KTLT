#include <stdio.h>
#include <string.h>

int main() {
	char fullName[100], searchName[50];

	printf("Nhap ho ten day du: ");
	fgets(fullName, sizeof(fullName), stdin);

	// Loai bo ky tu xuong dong neu co
	fullName[strcspn(fullName, "\n")] = 0;

	printf("Nhap ten can tim: ");
	fgets(searchName, sizeof(searchName), stdin);

	// Loai bo ky tu xuong dong neu co
	searchName[strcspn(searchName, "\n")] = 0;

	// Tim kiem ten trong chuoi ho ten
	if (strstr(fullName, searchName) != NULL) {
		printf("Ten %s da nhap dung.\n", searchName);
	}
	else {
		printf("Ten %s da nhap sai.\n", searchName);
	}
	getchar();
	return 0;
}