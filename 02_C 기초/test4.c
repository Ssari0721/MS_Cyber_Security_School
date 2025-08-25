#include <stdio.h>
// 형 변환 실습 

int main()
{
	int n = 5.25;	// 소수부의 손실 
	float d = 3.0;	// 값의 표현이 넒은 범위로의 변환 
	int c = 129;
	
	printf("n: %d  d: %f  c: %d\n", n, d, c);	// 내부적 형 변환 
	
}
