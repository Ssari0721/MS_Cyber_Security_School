/*
���� �ǽ�
- �б�, ����ġ, �Լ�

'0'~'9' ����
'a'~'z' �ҹ���
'A'~'Z' �빮��
������ Ư�� ���� 
*/

#include <stdio.h>
#include <conio.h>	//windows consloe only

int func1(char c);

int main()
{
	int k;
	int m = 1;	//1. ���۷��̼� ��� 1�� ���� 
	char c;
	
	while(1)	//1. while(m) m=1�� ������ ���� ����, m�� 0���� ����� �ݺ� ���� 
	{
		printf(">"); c = getch();
		// scanf�� eco ����� �־� �Է� ���� Ű�� ��ȯ��
		// getch�� eco ����� ���� 
	
		//2. k = func1(c);
		
		//switch(k)
		switch(func1(c))	//2. k = func1(c); �����ϰ� switch ������ �־ �� 
		{
			case 1 :
				printf("%c : �빮��\n", c);
				break;
			case 2 :
				printf("%c : �ҹ���\n", c);
				break;
			case 3 :
				printf("%c : ����\n", c);
				break;
			case 4 :
				printf("%c : Ư������\n", c);
				break;
			default :
				exit(0);	//������ ���� ó��(���� �ƴ�), ���� ���̽��� ���� �޾Ƽ� ���� ó�� 
				//break;
		}
	}
	
}

int func1(char c)
{
	int k;
	
	if((c >= 'A') && (c <= 'Z')) k = 1;	//c���� 'A'�� ũ�ų� ����, c���� 'Z'�� �۰ų� ���� / ������ ���ǽ��� ��ȣ�� ������ 
	else if((c >= 'a') && (c <= 'z')) k = 2;
	else if((c >= '0') && (c <= '9')) k = 3;
	else if(c == 3) k = 0;	//ctrl + C(^C)
	else k = 4;
	return k;
}
