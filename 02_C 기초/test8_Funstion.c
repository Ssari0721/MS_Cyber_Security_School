#include <stdio.h>	//�⺻ ��� ���� 
#include <conio.h>	//console ��� ����

//�簢���� �ﰢ���� ���� ���ϱ�


//proto type �۾� 
int rectangle(int a, int b);
double triangle(int a, int b);

int main()
{
	int x, y;
	
	printf("����, ���θ� �Է� �ϼ��� [X Y] : "); scanf("%d %d", &x, &y);
	
	//�Լ� ����, ��� ���� ���� 
	int r = rectangle(x, y);
	double t = triangle(x, y);	//int�� ���� �� 
	
	printf("=====================================================\n");
	printf("�غ��� %d �̰�, ���̰� %d �� 4������ ������ %d �Դϴ�.\n", x, y, r);
	printf("�غ��� %d �̰�, ���̰� %d �� 4������ ������ %f �Դϴ�.\n", x, y, t);
} 


int rectangle(int a, int b)
{
	int xy = a * b;	//return a * b;
	return xy;	//����/������� ���� ������ �������� �ۼ��ϴ°��� ���� 
	//����� ��� �� �ϳ� - ���������� ������ Ǯ� �ۼ� 
}


double triangle(int a, int b)	//int�� ���� �ߴµ� double �� ���� ����[Error] conflicting types for 'triangle', [Note] previous implicit declaration of 'triangle' was here
{
	double xy = (double)a * (double)b / 2.0;	//2.0���� �Է��Ͽ� �Ǽ��� �Է� 
	return xy;
}
