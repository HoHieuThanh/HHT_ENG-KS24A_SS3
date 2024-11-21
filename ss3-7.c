#include<stdio.h>
int main(){
	int number, a, b ,c, A, B, C, sum;
	printf("nhap vao so co 4 chu so: ");
	scanf("%d",&number);
	
	a=number/1000;
	A=number%1000;
	
	b=A/100;
	B=A%100;
	
	c=B/10;
	C=B%10;
	
	sum=a+b+c+C;
	printf("tong cua 4 chu so trong so tren la: %d",sum);
	
	return 0;
}