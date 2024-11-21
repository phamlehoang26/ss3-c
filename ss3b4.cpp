#include<stdio.h>
int main(){
	float a , b , c;
	scanf("%f %f %f",&a, &b ,&c);
	float score((a + b + c )/3);
	printf("trung binh diem %2f",score);
	printf("/ntongdiem %.2f",a+b+c);
		return 0;
}
