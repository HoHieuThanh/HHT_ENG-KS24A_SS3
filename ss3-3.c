#include<stdio.h>
int main(){
	float r, chuvi, dientich;
	printf("nhap ban kinh hinh tron:");
	scanf("%f",&r);
	chuvi=2*3.14*r;
	dientich=3.14*r*r;
	printf("chu vi: %.2f\n",chuvi);
	printf("dien tich: %.2f",dientich);
	return 0;
}