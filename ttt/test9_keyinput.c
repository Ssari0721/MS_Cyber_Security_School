#include <stdio.h>
#include <conio.h>

/*
입력받은 KEY값을 함수의 매개변수로 전달 하고
함수내에서 대문자/소문자/숫자/특수키 종류를
구분하여 출력하는 프로그램 작성

ex)
>a : 소문자
>A : 대문자
>@ : 특수문자
>4 : 숫자
*/



int main()
{
	char i;
	
	printf("\n\n키를 입력 하세요 : ");
	
	/*
	scanf("%c", &i);	입력을 받고 엔터로 넘어감 
	i = getch();		키보드가 눌리는 즉시 넘어감 
	*/
	
	scanf("%c", &i);
	//i = getch();
		 
	printf("\n\n==============================\n\n");
	printf("입력하신 키는 \'%c\' 입니다.\n", i);
					
	switch(i)
	{
		case 'a' ... 'z' :
			Msgcall();
			printf("%c : 소문자", i);
			Msgcall_1();
			break;
			
		case 'A' ... 'Z' :
			Msgcall();
			printf("%c : 대문자", i);
			Msgcall_1();
			break;
		
		case '0' ... '9' :
			Msgcall();
			printf("%c : 숫자", i);
			Msgcall_1();
			break;
			
		case '\n' :
			Msgcall();
			printf("엔터");
			Msgcall_1();
			break;
			
		case ' ' :
			Msgcall();
			printf("스페이스바");
			Msgcall_1();
			break;
						
		default :
			Msgcall();
			printf("%c : 특수문자", i);
			Msgcall_1();
		
		break;
	}	
}

int Msgcall()
{
	printf("\n==============================\n\n");
	printf("   결과 값을 출력 합니다.\n\n");
	printf("       > ");
}

int Msgcall_1()
{
	printf("\n\n==============================\n\n");
}
