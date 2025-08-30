#include <stdio.h>

//배열 갯수 없을 시 중간부터 다시 반환 되는 경우가 있음
char* name[] = { "박정석", "박재은", "박시혜", "임준혁", "이승빈" };
//문자열의 배열 / 캐릭터 포인터 타입의 배열 / 차원 배열
char* title[] = { "번호", "이름", "국어", "영어", "수학" };

int kor[] = { 10, 20, 30, 40, 50 }; //숫자는 포인터 없이 그냥 써도 됨
int eng[] = { 60, 70, 80, 90, 10 };
int mat[] = { 90, 80, 70, 60, 50 };

int main(int n, char **s)
// CLI : Commad Line Interface / 변수의 overwhrit를 감안 하여 간단히 작성 / **s = *s[]
{
 int start = 0, end = 5;

 if(n > 1) // "1" "2"
 {
  start = s[1][0] - '0' - 1; // 문자 '1' ==> 숫자 1
  end = start + 1;
 } 
   for(int i = start; i < end; i++)
   {
     if(i == start) //타이틀 라인 출력
     {
       for(int j = 0; j < 5; j++)
       {
         printf(" %s  ", title[j]);
       }
       printf("\n");
     }
     printf("%4d : %s / %3d / %3d / %3d\n", i+1, name[i], kor[i], eng[i], mat[i]);
     //문자열 을 순차적으로 출력
   }
}
