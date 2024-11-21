#include<stdio.h>
	int main(){
		
		//khai bao bien PI float ban kinh
		float Pi = 3.14;
		int radius = 5;
		//tinh chuvi va dien tich hinh tron
		int perimeter = Pi * radius * 2;
		printf(" chu vi hinh tron la %d\n",perimeter);
		
		int acreage = Pi * radius * radius;
		printf(" dien tich hinh tron la %d\n",acreage);
		
		return 0;
	}
