#include <stdio.h>
#include <conio.h>		//consloe 사용을 위한 헤더 파일 

int main()
{
	// 2개의 값을 받아 사칙 연산 
	
	int v1, v2;
	
	
	printf("Value 1값을 입력하세요 : "); scanf("%d", &v1);
	printf("Value 2값을 입력하세요 : "); scanf("%d", &v2);
	printf("===================================\n");
	printf(" value 1 : %5d / value 2 : %5d\n", v1, v2);
	printf("===================================\n");
	printf("  연산을 선택 하세요 [+, -, *, /]\n");
	printf("===================================\n");
	// 문장 = 문자열 : ""
	// 단일 문자 : '' 
	
	for(;;)
	{
	
		char/*int*/ k = getch();	// consloe 함수 / 입력 받은 키 값 return
	
		switch(k)
		{
			case '+':
				Msgcall();
				printf("    %d %c %d = %d\n", v1, k, v2, v1 + v2); 
				Msgcall_1();
				break;
				
			case '-':
				Msgcall();
				printf("    %d %c %d = %d\n", v1, k, v2, v1 - v2);
				Msgcall_1();
				break;
							
			case '*':
				Msgcall();
				printf("    %d %c %d = %d\n", v1, k, v2, v1 * v2);
				Msgcall_1();
				break;
				
			case '/':
				Msgcall();
				printf("    %d %c %d = %f\n", v1, k, v2, /*(double)*/((double)v1 / (double)v2));	//연산 결과 flot 
				//(double)((double)v1 / (double)v2) - 형 변환 필요 
				Msgcall_1();
				break;
				
			default : k = 03;	//다른키 입력은 종료 / 03:정해진 키보드 외 모든 키 
				break;
		}
		if(k == 3)	//switch 에서 3 입력 시 진입 
		{
			break;	//빠져 나감 
		}		
	}	
}

int Msgcall()
{
	printf("\n연산된 값을 출력 합니다\n\n");
}

int Msgcall_1()
{
	printf("\n===================================\n");
	//printf("  연산을 선택 하세요[+, -, *, /]\n");
}

