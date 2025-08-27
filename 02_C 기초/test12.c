#include <stdio.h>

char* str = "Good afternoon";	//상수 영역(const) 
int main()
{
	//char* str = "Good afternoon";	//문자열 포인터, ""상수를 의미함(메모리 최 상단에 위치-고정)
	char* p = str; 
	//char str[] = "Good afternoon";
	printf("before : \"%s\"\n", str);
	
	str[5] = '_';	//*(str+5) 같은 명령
	printf("after  : \"%s\"\n", str);
} 
