#include<stdio.h>
	int main(){
		
			// khai bao bien 1 2 so nguyen
		int firstNumber = 10;
		int secondNumber = 5;
		// tinh tong va luu vao 1 bien khac
		int total = firstNumber + secondNumber;
		
		printf(" tong cua number1 va number 2 la %d\n", total);
		
		// tao them 3 bien  tich hieu thuong
		int multy = firstNumber * secondNumber;
		printf(" tich cua n1 va n2 la %d\n", multy);
		
		int minus = firstNumber - secondNumber;
		printf(" hieu cua n1 va n2 la %d\n", minus);
		
		float divide = firstNumber / secondNumber;
		printf(" thuong cua n1 va n2 la %d\n", divide);
		
		return 0;
	}
