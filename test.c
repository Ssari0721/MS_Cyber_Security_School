//  Hello 'C' World

#include <stdio.h>
/*
int main()
{
	printf("Hello 'C' World\n");
}
*/

int main(void)
{
	
	int age, score;		// int(����)���� ���� 
	
	// �׳� �Է� 
	printf("My age : 25\n");
	printf("\n");
	printf("100 is my point\n");
	printf("\n");
	printf("Good\nmorring\neverybody\n");
	printf("\n");
	
	//�Լ��� ���� 
	printf("My age : %d\n", 20);
	printf("\n");
	printf("100 is my point \n", 100);
	printf("\n");
	printf("Good \nmorring \neverybody \n");
	printf("\n");
	
	//���ٷ� ����� 
	printf("--------------------------------\n\n");
	printf("My age : %d \n \n%d is my point \n \nGood \nmorring \neveybody \n", 20, 100);
	printf("--------------------------------\n");
	
	//scanf ����
	printf("����� ���̰� ��� �ǽó���? ");
	scanf("%d", &age); 
	printf("_%d_\n", age);
	
	printf("--------------------------------\n");	
	
	printf("�����¿�? ");
	scanf("%d", &score); 
	printf("_%d_\n\n", score);
	
	printf("--------------------------------\n");	
		
	//scanf ����_01
	/*
	printf("����� ���̰� ��� �ǽó���? "); scanf("%d", &age); 
	printf("_%d_\n", age);
	
	printf("--------------------------------\n");	
	
	printf("�����¿�? "); scanf("%d", &score); 
	printf("_%d_\n", score);
	
	printf("--------------------------------\n");	
	*/
	
	//scanf ����_02
	printf("����� ���̰� ��� �ǽó���? "); scanf("%d", &age); 
	printf("�����¿�? "); scanf("%d", &score); 
	
	printf("================================\n");	
	
	printf("My age : %d\n", age);
	printf("%d is my point \n", score);
	
	return 0;
}
