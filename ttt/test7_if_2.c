#include <stdio.h>
#include <conio.h>

//�Էµ� ���ڸ� �޾Ƽ� ���� ���� ǥ�� 

int main()
{
	/*
	char num_1;
	
	printf("���ڸ� �Է��ϼ��� : ");
	
	//scanf("%c", &num_1);
	num_1 = getch(); 
	printf("\n");
	
	printf("�Էµ� ���ڴ� \'%c\' �Դϴ�\n", num_1);
	*/
	
	
	
	//�ݺ��� �ȿ��� ������ ���� �Է��� ���� 
	for(;;)
	{
		char num_1;
	
		printf("���ڸ� �Է��ϼ��� : ");
	
		//scanf("%c", &num_1);
		num_1 = getch(); 
		printf("%c\n", num_1);
		printf("\n");
		printf("======================\n");
		printf("\n�Էµ� ���ڴ� \'%c\' �Դϴ�\n", num_1);
		
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
			printf("���� �� Ű�� ���� �Ǿ� ���� �մϴ�.");
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
