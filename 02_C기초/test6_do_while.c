#include <stdio.h>
// 반복문 실습
// 1~10,000 합은?
// 1~10,000 중에서 홀수의 합은? 

int main()
{
	/*
	//입력과 출력을 하드코딩 
	int index = 0, val = 0;			//,로 구분하여 한줄에 적어도 됨 
	
	
	while(index < 100)			// 100까지 홀수 의 값만 더한 값 계산 
	{
		val = val + index;
		printf("value : %04d / inexd value : %02d\n", val, index);
		// $d = %(-)(n)d =(n) : 자릿수/ (-) : 기입 시 좌측 정렬(숫자보단 텍스트에 적용) 
		// %04d = 4자리로 맞추고 앞을 0으로 채운다 
		//index++;
		index = index + 2;			// 홀수 만들기 		 
	}
	*/
	
	//==============================================================
	
	/*
	// 시작과 종료값을 입력 받아 처리 
	int sval, eval, val = 0;
	
	printf("시작 값을 입력 하세요 : "); scanf("%d", &sval);
	printf("종료 값을 입력 하세요 : "); scanf("%d", &eval);
	
	printf("=================================================\n");
	
	while(sval <= eval)
	{
		val = val + sval;
		printf("value : %10d / inexd value : %10d\n", val, sval);
		sval = sval + 2;
	 } 
	*/
	
	//==============================================================
	
	int sval, eval, val = 0; 
	
	printf("시작 값을 입력 하세요 : "); scanf("%d", &sval);
	printf("종료 값을 입력 하세요 : "); scanf("%d", &eval);
	
	for(/*sval = sval 생략 가능*/; sval < eval; sval += 2)			//sval +=2 : sval = sval + 2;
	{
		val = val + sval;
		printf("value : %10d / inexd value : %10d\n", val, sval);		// %10d:10자리까지 표현 
	}
	
}
