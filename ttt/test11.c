#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };	//배열 선언 시 세키클론 필요
	int* p = arr;
	
	printf("int arr[] = { ");
		
	int i;
	for(i = 0; i < 9; i++)	//for문 안에서 사용 되는 인덱스를 안에서 선언(c++ 버전) 
	{	//그레이스 {} - 중괄호 
		printf("%d", /*arr[i], *(p+i)*/p[i]);
		//arr[i], *(p+i), p[1] - 전부 다 됨
		
		if(i < 8)
		{
			printf(", ");
		}
	}
	printf(" };");
	return i; 
}
