#include<stdio.h>
int main() {
	float c, f;
	printf("nhap nhiet do C:");
	scanf("%f",&c);
	f = (c*1.8)+32;
	printf("nhiet do F la: %.2f",f);
	return 0;
}