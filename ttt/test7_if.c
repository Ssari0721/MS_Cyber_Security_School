#include <stdio.h>
#include <conio.h>		//consloe ����� ���� ��� ���� 

int main()
{
	// 2���� ���� �޾� ��Ģ ���� 
	
	int v1, v2;
	
	
	printf("Value 1���� �Է��ϼ��� : "); scanf("%c", &v1);
	printf("Value 2���� �Է��ϼ��� : "); scanf("%c", &v2);
	printf("===================================\n");
	printf(" value 1 : %5d / value 2 : %5d\n", v1, v2);
	printf("===================================\n");
	printf("  ������ ���� �ϼ���[+, -, *, /]\n");
	printf("===================================\n");
	// ���� = ���ڿ� : ""
	// ���� ���� : '' 
	
	
	/*while(1)*/	//Loop�� ���� 
	for(;;)	//while�� ���� �ϰ� ��� ���� 
	{	
		char/*int*/ k = getch();		// consloe �Լ� / �Է� ���� Ű �� return
	
		if(k == '+')		//�Էµ� ���� + ��ȣ�� ���ٸ� 
		{
			//printf("����� ������ Ȯ�� �մϴ�\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 + v2); 
			Msgcall_1();
		}
		else if(k == '-')	//�Էµ� ���� - ��ȣ�� ���ٸ� 
		{
			//printf("����� ������ Ȯ�� �մϴ�\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 - v2);
			Msgcall_1();
		}
		else if(k == '*')	//�Էµ� ���� * ��ȣ�� ���ٸ� 
		{
			//printf("����� ������ Ȯ�� �մϴ�\n\n");
			Msgcall();
			printf("    %c %c %c = %c\n", v1, k, v2, v1 * v2);
			Msgcall_1();
		}
		else if(k == '/')	//�Էµ� ���� / ��ȣ�� ���ٸ� 
		{
			//printf("����� ������ Ȯ�� �մϴ�\n\n");
			Msgcall();
			printf("    %c %c %c = %f\n", v1, k, v2, /*(double)*/((double)v1 / (double)v2));	//���� ��� flot 
			//(double)((double)v1 / (double)v2) - �� ��ȯ �ʿ� 
			Msgcall_1();
		}
		else break;	//+-*/ �� Ű �Է��� �Ǹ� �������� ���� ���� 
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

