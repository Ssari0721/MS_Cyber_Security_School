#include <stdio.h>
#include <conio.h>		//consloe ����� ���� ��� ���� 

int main()
{
	// 2���� ���� �޾� ��Ģ ���� 
	
	int v1, v2;
	
	
	printf("Value 1���� �Է��ϼ��� : "); scanf("%d", &v1);
	printf("Value 2���� �Է��ϼ��� : "); scanf("%d", &v2);
	printf("===================================\n");
	printf(" value 1 : %5d / value 2 : %5d\n", v1, v2);
	printf("===================================\n");
	printf("  ������ ���� �ϼ��� [+, -, *, /]\n");
	printf("===================================\n");
	// ���� = ���ڿ� : ""
	// ���� ���� : '' 
	
	for(;;)
	{
	
		char/*int*/ k = getch();	// consloe �Լ� / �Է� ���� Ű �� return
	
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
				printf("    %d %c %d = %f\n", v1, k, v2, /*(double)*/((double)v1 / (double)v2));	//���� ��� flot 
				//(double)((double)v1 / (double)v2) - �� ��ȯ �ʿ� 
				Msgcall_1();
				break;
				
			default : k = 03;	//�ٸ�Ű �Է��� ���� / 03:������ Ű���� �� ��� Ű 
				break;
		}
		if(k == 3)	//switch ���� 3 �Է� �� ���� 
		{
			break;	//���� ���� 
		}		
	}	
}

int Msgcall()
{
	printf("\n����� ���� ��� �մϴ�\n\n");
}

int Msgcall_1()
{
	printf("\n===================================\n");
	//printf("  ������ ���� �ϼ���[+, -, *, /]\n");
}

