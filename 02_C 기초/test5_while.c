#include <stdio.h>
// �ݺ��� �ǽ�

int main()
{
	int sval, eval, rval;		//start value, end value, result value
	
	printf("���� ���� �Է� �ϼ��� : ");	scanf("%d", &sval);
	printf("==============================\n");
	printf("���� ���� �Է� �ϼ��� : ");	scanf("%d", &eval);
	printf("==============================\n");
	
	printf("���� �� : %d, ���� �� : %d\n", sval, eval);
	printf("==============================\n");
	
	rval = 0;
	int index = sval;
	
	while((index >= sval) && (index <= eval))		//�������ǽ� 
	{
		rval = rval + sval; sval++;
		index++;
	}
	
	printf("��� ���� %d �Դϴ�.", rval);
} 
