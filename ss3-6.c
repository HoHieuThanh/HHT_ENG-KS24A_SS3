#include<stdio.h>
int main(){
	float canh, cao, s;
	printf("nhap do dai canh tam giac: ");
	scanf("%f",&canh);
	printf("nhap chieu cao tam giac: ");
	scanf("%f" ,&cao);
	s=0.5*canh*cao;
	printf("dien tich tam giac la: %.1f",s);
	
	return 0;
}