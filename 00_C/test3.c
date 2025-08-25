#include <stdio.h>
// 논리 연산 실습 

int main()
{
	int x, y;			// 입력 변수 선언 
	int A, O, X, N;		// 출력 변수 선언 
	printf("x  y  A  O  X  N\n");
	printf("================\n");
	
	x=1, y=1, printf("%d  %d  %d  %d  %d  %d\n", x, y, x&&y, x||y, x^y, !x);
	x=1, y=0, printf("%d  %d  %d  %d  %d  %d\n", x, y, x&&y, x||y, x^y, !x);
	x=0, y=1, printf("%d  %d  %d  %d  %d  %d\n", x, y, x&&y, x||y, x^y, !x);
	x=0, y=0, printf("%d  %d  %d  %d  %d  %d\n", x, y, x&&y, x||y, x^y, !x);
	
		 
	
 } 
