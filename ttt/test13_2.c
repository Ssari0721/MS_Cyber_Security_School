#include <stdio.h>
#include <string.h> // strcmp사용을 위한, 문자열 함수
#include <stdlib.h> // exit 사용을 위한 함수

//배열 갯수 없을 시 중간부터 다시 반환 되는 경우가 있음
char* name[] = { "박정석", "박재은", "박시혜", "임준혁", "이승빈" };
//문자열의 배열 / 캐릭터 포인터 타입의 배열 / 차원 배열
char* title[] = { "번호", "이름", "국어", "영어", "수학" };

int kor[] = { 10, 20, 30, 40, 50 }; //숫자는 포인터 없이 그냥 써도 됨
int eng[] = { 60, 70, 80, 90, 10 };
int mat[] = { 90, 80, 70, 60, 50 };

void swap(int *i, int *j); // swap 함수 proto type 선언
// 옵션 형태로 기술(정의)
// <> 입력, [] 옵션 - 기본적인 약속

//
// t13 --help
//
// t13 [<번호>]
//     번호에 해당 하는 학생의 이름과 국여수 성적을 화면에 출력
//     <default> All
//

int main(int n, char **s) // CLI : Commad Line Interface / 변수의 overwhrit를 감안 하여 간단히 작성 / **s = *s[]
{
  int start = 0, end = 5;

  if(n > 1) // "1" "2" "--help" / 예외처리 어렵다
  {
    if(strcmp(s[1], "--help") == 0) // '--help' 들어 옴
    //2개의 문자열을 받아 비교 / 두번쨰 문자열과 비교
    //strcmp(compare=비교하다) 포준 함수, strcpy, strlen, strcat(연결), 문자열 직접 구분 불가
    {
      printf("\n////////////////////////////////////////////////////////////////\n");
      printf("// t13 [<번호>] [<--help>]\n");
      printf("//     번호에 해당 하는 학생의 이름과 국여수 성적을 화면에 출력\n");
      printf("//     <default> All\n");
      printf("////////////////////////////////////////////////////////////////\n\n\n");
      exit(1); //빠져 나가기
    }

    start = atoi(s[1]) - 1; // 문자열 -> 숫자 변경 함수
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
      printf("%4d : %s / %3d / %3d / %3d\n", i+1, name[i], kor[i], eng[i], mat[i]); //문자열 을 순차적으로 출력
     }
}
