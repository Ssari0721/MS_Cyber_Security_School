#include <stdio.h>

char* str = "Good afternoon";	//��� ����(const) 
int main()
{
	//char* str = "Good afternoon";	//���ڿ� ������, ""����� �ǹ���(�޸� �� ��ܿ� ��ġ-����)
	char* p = str; 
	//char str[] = "Good afternoon";
	printf("before : \"%s\"\n", str);
	
	str[5] = '_';	//*(str+5) ���� ���
	printf("after  : \"%s\"\n", str);
} 
