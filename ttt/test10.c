#include <stdio.h>

int main()
{
	int a = 0x1234;
	//int* p;
	char* pc;	//1byte
	int* pi;	//4byte
	double *pd;	//8byte
	
	
	printf("&a:%08x / %08x\n\n\n", &a, a);	//before 
	//&a : ���ڿ�
	//%08x : 16����, 8�ڸ�, �������� 0���� ä�� 
	
	//p = &a;	//�ּ� 
	pi = &a;
	//*p = 0x4567;	//������ 
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
