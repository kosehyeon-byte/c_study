/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct complexnumber {
	float realnum;
	float imaginnum;
} CN;

void PlusComplex(CN cn1, CN cn2) {
	float result_real, result_img;
	result_real = cn1.realnum + cn2.realnum;
	result_img = cn1.imaginnum + cn2.imaginnum;
	printf("plus result : ");
	printf("real num : %g ," , result_real);
	printf("img num : %g\n" , result_img);
}

void MultiComplex(CN cn1, CN cn2) {
	float a, b, c, d, result_real, result_img;
	a = cn1.realnum;
	b = cn1.imaginnum;
	c = cn2.realnum;
	d = cn2.imaginnum;

	result_real = a * c - b * d;
	result_img = b * c + a * d;

	printf("multi result : ");
	printf("real num : %g ,", result_real);
	printf("img num : %g\n", result_img);
}

int main(void) {
	CN cn1, cn2;
	printf("Enter real num and img num of complex number 1 : ");
	scanf("%f %f", &cn1.realnum, &cn1.imaginnum);
	printf("Enter real num and img num of complex number 2 : ");
	scanf("%f %f", &cn2.realnum, &cn2.imaginnum);
	PlusComplex(cn1, cn2);
	MultiComplex(cn1, cn2);
	return 0;
}
*/

