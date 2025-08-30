#include <stdio.h>
#include <conio.h>

//입력된 숫자를 받아서 받은 숫자 표시 

int main()
{
	
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
				
		
		switch(num_1)
		{
			case '0' :
				msgcall();
				printf("%c   : Zero\n", num_1);
				msgcall_1();
				break;
		
			case '1' :
				msgcall();
				printf("%c   : One\n", num_1);
				msgcall_1();
				break;
		
			case '2' :
				msgcall();
				printf("%c   : Two\n", num_1);
				msgcall_1();
				break;
		
			case '3' :
				msgcall();
				printf("%c   : Three\n", num_1);
				msgcall_1();
				break;
		
			case '4' :
				msgcall();
				printf("%c   : Four\n", num_1);
				msgcall_1();
				break;
				
			case '5' :
				msgcall();
				printf("%c   : Five\n", num_1);
				msgcall_1();			
				break;
			
			case '6' :
				msgcall();
				printf("%c   : Six\n", num_1);
				msgcall_1();
				break;
				
			case '7' :
				msgcall();
				printf("%c   : Seven\n", num_1);
				msgcall_1();
				break;
				
			case '8' :
				msgcall();
				printf("%c   : Eight\n", num_1);
				msgcall_1();
				break;
				
			case '9':
				msgcall();
				printf("%c   : Nine\n", num_1);
				msgcall_1();
				break;
				
			default :
				num_1 = 03;
				msgcall();
				printf("숫자 외 키가 감지 되어 종료 합니다.\n");
				msgcall_1();
				break;
		}
		if(num_1 == 03)
		{
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
