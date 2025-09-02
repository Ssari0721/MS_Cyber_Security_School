#include <stdio.h>	//기본 헤더 파일 
#include <conio.h>	//console 헤더 파일

//사각형과 삼각형의 면적 구하기


//proto type 작업 
int rectangle(int a, int b);
double triangle(int a, int b);

int main()
{
	int x, y;
	
	printf("가로, 세로를 입력 하세요 [X Y] : "); scanf("%d %d", &x, &y);
	
	//함수 생성, 결과 값을 받음 
	int r = rectangle(x, y);
	double t = triangle(x, y);	//int로 간주 함 
	
	printf("=====================================================\n");
	printf("밑변이 %d 이고, 높이가 %d 인 4각형의 면적은 %d 입니다.\n", x, y, r);
	printf("밑변이 %d 이고, 높이가 %d 인 4각형의 면적은 %f 입니다.\n", x, y, t);
} 


int rectangle(int a, int b)
{
	int xy = a * b;	//return a * b;
	return xy;	//검증/디버깅을 위해 별도의 수식으로 작성하는것이 좋음 
	//디버깅 기법 중 하나 - 순차적으로 수식을 풀어서 작성 
}


double triangle(int a, int b)	//int로 간주 했는데 double 이 나와 중지[Error] conflicting types for 'triangle', [Note] previous implicit declaration of 'triangle' was here
{
	double xy = (double)a * (double)b / 2.0;	//2.0으로 입력하여 실수로 입력 
	return xy;
}
