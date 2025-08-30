#include <stdio.h>
// 반복문 실습

int main()
{
	int sval, eval, rval;		//start value, end value, result value
	
	printf("시작 값을 입력 하세요 : ");	scanf("%d", &sval);
	printf("==============================\n");
	printf("종료 값을 입력 하세요 : ");	scanf("%d", &eval);
	printf("==============================\n");
	
	printf("시작 값 : %d, 종료 값 : %d\n", sval, eval);
	printf("==============================\n");
	
	rval = 0;
	int index = sval;
	
	while((index >= sval) && (index <= eval))		//수행조건식 
	{
		rval = rval + sval; sval++;
		index++;
	}
	
	printf("계산 값은 %d 입니다.", rval);
} 
