/*
과제 실습
- 분기, 스위치, 함수

'0'~'9' 숫자
'a'~'z' 소문자
'A'~'Z' 대문자
나머지 특수 문자 
*/

#include <stdio.h>
#include <conio.h>	//windows consloe only

int func1(char c);

int main()
{
	int k;
	int m = 1;	//1. 오퍼레이션 모드 1로 지정 
	char c;
	
	while(1)	//1. while(m) m=1일 동안은 무한 루프, m을 0으로 만들면 반복 종료 
	{
		printf(">"); c = getch();
		// scanf는 eco 기능이 있어 입력 받은 키가 반환됨
		// getch는 eco 기능이 없음 
	
		//2. k = func1(c);
		
		//switch(k)
		switch(func1(c))	//2. k = func1(c); 생략하고 switch 안으로 넣어도 됨 
		{
			case 1 :
				printf("%c : 대문자\n", c);
				break;
			case 2 :
				printf("%c : 소문자\n", c);
				break;
			case 3 :
				printf("%c : 숫자\n", c);
				break;
			case 4 :
				printf("%c : 특수문자\n", c);
				break;
			default :
				exit(0);	//하위단 무시 처리(정식 아님), 종료 케이스를 따로 받아서 종료 처리 
				//break;
		}
	}
	
}

int func1(char c)
{
	int k;
	
	if((c >= 'A') && (c <= 'Z')) k = 1;	//c보다 'A'가 크거나 같고, c보다 'Z'가 작거나 같다 / 각각의 조건식은 괄호로 씌어줌 
	else if((c >= 'a') && (c <= 'z')) k = 2;
	else if((c >= '0') && (c <= '9')) k = 3;
	else if(c == 3) k = 0;	//ctrl + C(^C)
	else k = 4;
	return k;
}
