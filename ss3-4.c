#include <stdio.h>

int main() {
	
	float toan, van, anh, tong, diemTB;
	printf("toan");
	scanf("%f",&toan);

	printf("van");
	scanf("%f",&van);

	printf("anh");
	scanf("%f",&anh);

	
	tong = toan + van + anh;
	printf("tong diem: %.2f\n",tong);
	diemTB = tong / 3;
	printf("diem trung binh la: %.2f\n",diemTB);
	
	return 0;
}