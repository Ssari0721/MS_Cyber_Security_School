#include <stdio.h>
// �ݺ��� �ǽ�
// 1~10,000 ����?
// 1~10,000 �߿��� Ȧ���� ����? 

int main()
{
	/*
	//�Է°� ����� �ϵ��ڵ� 
	int index = 0, val = 0;			//,�� �����Ͽ� ���ٿ� ��� �� 
	
	
	while(index < 100)			// 100���� Ȧ�� �� ���� ���� �� ��� 
	{
		val = val + index;
		printf("value : %04d / inexd value : %02d\n", val, index);
		// $d = %(-)(n)d =(n) : �ڸ���/ (-) : ���� �� ���� ����(���ں��� �ؽ�Ʈ�� ����) 
		// %04d = 4�ڸ��� ���߰� ���� 0���� ä��� 
		//index++;
		index = index + 2;			// Ȧ�� ����� 		 
	}
	*/
	
	//==============================================================
	
	/*
	// ���۰� ���ᰪ�� �Է� �޾� ó�� 
	int sval, eval, val = 0;
	
	printf("���� ���� �Է� �ϼ��� : "); scanf("%d", &sval);
	printf("���� ���� �Է� �ϼ��� : "); scanf("%d", &eval);
	
	printf("=================================================\n");
	
	while(sval <= eval)
	{
		val = val + sval;
		printf("value : %10d / inexd value : %10d\n", val, sval);
		sval = sval + 2;
	 } 
	*/
	
	//==============================================================
	
	int sval, eval, val = 0; 
	
	printf("���� ���� �Է� �ϼ��� : "); scanf("%d", &sval);
	printf("���� ���� �Է� �ϼ��� : "); scanf("%d", &eval);
	
	for(/*sval = sval ���� ����*/; sval < eval; sval += 2)			//sval +=2 : sval = sval + 2;
	{
		val = val + sval;
		printf("value : %10d / inexd value : %10d\n", val, sval);		// %10d:10�ڸ����� ǥ�� 
	}
	
}
