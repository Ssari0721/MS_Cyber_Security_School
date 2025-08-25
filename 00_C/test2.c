#include <stdio.h>

int main()
{
	int a, b, c;
	
	a=10;		//10진수 
	b=0x10;		//16진수 
	c=010;		//8진수 
	
	printf("%d(D) %d(H) %d(O) \n", a, b, c);
	
	return 0;
}
