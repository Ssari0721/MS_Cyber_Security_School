#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };	//�迭 ���� �� ��ŰŬ�� �ʿ�
	int* p = arr;
	
	printf("int arr[] = { ");
		
	int i;
	for(i = 0; i < 9; i++)	//for�� �ȿ��� ��� �Ǵ� �ε����� �ȿ��� ����(c++ ����) 
	{	//�׷��̽� {} - �߰�ȣ 
		printf("%d", /*arr[i], *(p+i)*/p[i]);
		//arr[i], *(p+i), p[1] - ���� �� ��
		
		if(i < 8)
		{
			printf(", ");
		}
	}
	printf(" };");
	return i; 
}
