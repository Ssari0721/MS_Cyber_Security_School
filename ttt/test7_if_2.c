#include <stdio.h>
#include <conio.h>

//입력된 숫자를 받아서 받은 숫자 표시 

int main()
{
	/*
	char num_1;
	
	printf("숫자를 입력하세요 : ");
	
	//scanf("%c", &num_1);
	num_1 = getch(); 
	printf("\n");
	
	printf("입력된 숫자는 \'%c\' 입니다\n", num_1);
	*/
	
	
	
	//반복문 안에서 돌려야 지속 입력이 가능 
	for(;;)
	{
		char num_1;
	
		printf("숫자를 입력하세요 : ");
	
		//scanf("%c", &num_1);
		num_1 = getch(); 
		printf("%c\n", num_1);
		printf("\n");
		printf("======================\n");
		printf("\n입력된 숫자는 \'%c\' 입니다\n", num_1);
		
		//int k = getch();
		
		if(num_1 == '0')
		{
			msgcall();
			printf("%c   : Zero\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '1')
		{
			msgcall();
			printf("%c   : One\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '2')
		{
			msgcall();
			printf("%c   : Two\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '3')
		{
			msgcall();
			printf("%c   : Three\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '4')
		{
			msgcall();
			printf("%c   : Four\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '1')
		{
			msgcall();
			printf("%c   : Two\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '5')
		{
			msgcall();
			printf("%c   : Five\n", num_1);
			msgcall_1();			
		}
		else if(num_1 == '6')
		{
			msgcall();
			printf("%c   : Six\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '7')
		{
			msgcall();
			printf("%c   : Seven\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '8')
		{
			msgcall();
			printf("%c   : Eight\n", num_1);
			msgcall_1();
		}
		else if(num_1 == '9')
		{
			msgcall();
			printf("%c   : Nine\n", num_1);
			msgcall_1();
		}
		else
		{
			msgcall();
			printf("숫자 외 키가 감지 되어 종료 합니다.");
			msgcall_1();
			break;
		}
			
	}
	
}

int msgcall()
{
	printf("> ");
}

int msgcall_1()
{
	printf("\n======================\n\n");
}
