#include <stdio.h>
#include <conio.h>

/*
�Է¹��� KEY���� �Լ��� �Ű������� ���� �ϰ�
�Լ������� �빮��/�ҹ���/����/Ư��Ű ������
�����Ͽ� ����ϴ� ���α׷� �ۼ�

ex)
>a : �ҹ���
>A : �빮��
>@ : Ư������
>4 : ����
*/



int main()
{
	char i;
	
	printf("\n\nŰ�� �Է� �ϼ��� : ");
	
	/*
	scanf("%c", &i);	�Է��� �ް� ���ͷ� �Ѿ 
	i = getch();		Ű���尡 ������ ��� �Ѿ 
	*/
	
	scanf("%c", &i);
	//i = getch();
		 
	printf("\n\n==============================\n\n");
	printf("�Է��Ͻ� Ű�� \'%c\' �Դϴ�.\n", i);
					
	switch(i)
	{
		case 'a' ... 'z' :
			Msgcall();
			printf("%c : �ҹ���", i);
			Msgcall_1();
			break;
			
		case 'A' ... 'Z' :
			Msgcall();
			printf("%c : �빮��", i);
			Msgcall_1();
			break;
		
		case '0' ... '9' :
			Msgcall();
			printf("%c : ����", i);
			Msgcall_1();
			break;
			
		case '\n' :
			Msgcall();
			printf("����");
			Msgcall_1();
			break;
			
		case ' ' :
			Msgcall();
			printf("�����̽���");
			Msgcall_1();
			break;
						
		default :
			Msgcall();
			printf("%c : Ư������", i);
			Msgcall_1();
		
		break;
	}	
}

int Msgcall()
{
	printf("\n==============================\n\n");
	printf("   ��� ���� ��� �մϴ�.\n\n");
	printf("       > ");
}

int Msgcall_1()
{
	printf("\n\n==============================\n\n");
}
