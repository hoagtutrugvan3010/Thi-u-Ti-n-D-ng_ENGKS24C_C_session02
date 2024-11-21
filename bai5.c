#include<stdio.h>
	int main(){
		
		//tao bien canh chieu rong va chieu dai hcn
		int width = 5;
		int length = 8;
		//tinh chu vi va dien tich hinh chu nhat
		int perimeter = (width + length) * 2;
		printf("chu vi hinh chu nhat la %d\n",perimeter);
		
		int acreage = width * length;
		printf("dien tich hinh chu nhat la %d\n",acreage);
		
		return 0;

	}
