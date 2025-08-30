#include <stdio.h>
#include <conio.h>		//consloe 사용을 위한 헤더 파일 

int main()
{
	// 2개의 값을 받아 사칙 연산 
	
	int v1, v2;
	
	
	printf("Value 1값을 입력하세요 : "); scanf("%c", &v1);
	printf("Value 2값을 입력하세요 : "); scanf("%c", &v2);
	printf("===================================\n");
	printf(" value 1 : %5d / value 2 : %5d\n", v1, v2);
	printf("===================================\n");
	printf("  연산을 선택 하세요[+, -, *, /]\n");
	printf("===================================\n");
	// 문장 = 문자열 : ""
	// 단일 문자 : '' 
	
	
	/*while(1)*/	//Loop로 묶음 
	for(;;)	//while과 동일 하게 사용 가능 
	{	
		char/*int*/ k = getch();		// consloe 함수 / 입력 받은 키 값 return
	
		if(k == '+')		//입력된 값이 + 기호와 같다면 
		{
			//printf("연산된 갑값을 확인 합니다\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 + v2); 
			Msgcall_1();
		}
		else if(k == '-')	//입력된 값이 - 기호와 같다면 
		{
			//printf("연산된 갑값을 확인 합니다\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 - v2);
			Msgcall_1();
		}
		else if(k == '*')	//입력된 값이 * 기호와 같다면 
		{
			//printf("연산된 갑값을 확인 합니다\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 * v2);
			Msgcall_1();
		}
		else if(k == '/')	//입력된 값이 / 기호와 같다면 
		{
			//printf("연산된 갑값을 확인 합니다\n\n");
			Msgcall();
			printf("    %c %c %c = %f\n", v1, k, v2, /*(double)*/((double)v1 / (double)v2));	//연산 결과 flot 
			//(double)((double)v1 / (double)v2) - 형 변환 필요 
			Msgcall_1();
		}
		else break;	//+-*/ 외 키 입력이 되면 루프에서 빠져 나옴 
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

