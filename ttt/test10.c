#include <stdio.h>

int main()
{
	int a = 0x1234;
	//int* p;
	char* pc;	//1byte
	int* pi;	//4byte
	double *pd;	//8byte
	
	
	printf("&a:%08x / %08x\n\n\n", &a, a);	//before 
	//&a : 문자열
	//%08x : 16진수, 8자리, 나미지는 0으로 채움 
	
	//p = &a;	//주소 
	pi = &a;
	//*p = 0x4567;	//포인터 
	pc = pi;
	pd = pi;
	
	printf("&a:%08x / %08x\n", &a, a);	//after
	printf(" p:%08x / %08x\n", pi, *pi);	
	//printf("*p:          %08x\n", *p);
	printf("p+1:%08x / %08x\n", pi+1, *(pi+1));
	printf("p+2:%08x / %08x\n", pi+2, *(pi+2));
	printf("=================================\n");
	
	
	printf("&a:%08x / %08x\n", &a, a);	//after
	printf("p  :%08x / %08x / %08x\n", pi, pc, pd);	
	printf("p+1:%08x / %08x / %08x\n", pi+1, pc+1, pd+1);
	printf("p+2:%08x / %08x / %08x\n", pi+2, pc+2, pd+2);
} 
