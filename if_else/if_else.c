#include<stdio.h>
	
	int main(){
		int n;
		float m;

		printf("Nhap vao gia tri cho n:");
		scanf("%d", &n);
		printf("Nhap vao gia tri cho m:");
		scanf("%f", &m);

		if(n <= 0){
			printf("So nhap vao phai lon hon 0");
		}else if(n > 100){
			printf("So nhap vao khong vuot qua 100");
		}else{
			printf("Thoa dieu kien");
		}

		printf("Chuong trinh ket thuc");

		return 0;

	}