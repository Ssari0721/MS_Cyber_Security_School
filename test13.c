#include <stdio.h>
#include <string.h> // strcmp사용을 위한, 문자열 함수
#include <stdlib.h> // exit 사용을 위한 함수

/*
int main()
{
  
  int i = 10;
  int* p = &i;
  int** pp = &p;
  
  printf(" i : %08x (%08x)\n", &i, i);
  printf(" p : %08x (%08x) (%08x)\n", &p, p, *p); //p의 값, p값, p의 주소
  printf("pp : %08x (%08x) (%08x)\n", &pp, pp, **pp);
  
  printf("pp : %08x (%08x) (%08x)\n", &pp, pp, 10***pp); //하지 말 것 ㅋㅋㅋ / 가가가가가 와 같은말
}
*/

//줄 맞추기 숙제
//성적 순으로 등수 매기기

//배열 갯수 없을 시 중간부터 다시 반환 되는 경우가 있음
char* name[] = { "박정석", "박재은", "박시혜", "임준혁", "이승빈" }; //문자열의 배열 / 캐릭터 포인터 타입의 배열 / 차원 배열
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
  /*
  if(n == "--help")
  {
    printf("\n////////////////////////////////////////////////////////////////\n");
    printf("// t13 [<번호>]\n");
    printf("//     번호에 해당 하는 학생의 이름과 국여수 성적을 화면에 출력\n");
    printf("//     <default> All\n");
    printf("////////////////////////////////////////////////////////////////\n\n");  
  }
  */
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
      exit(1);
    }
    
    //start = s[1][0] - '0' - 1; // 문자 '1' ==> 숫자 1
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
       
    
      
  //--- 문자열 포인트, 점수 출력
  //printf("%s :  %s / %s / %s / %s\n", title[0], title[1], title[2], title[3], title[4]);

/*   for(int i = 0; i < 10; i++)
    {
      if(i==0) //타이틀 라인 출력
      {
        for(int j = 0; j < 5; j++)
        {
          printf(" %s  ", title[j]);
        }
        printf("\n");
      }
      printf("%4d : %s / %3d / %3d / %3d\n", i+1, name[i], kor[i], eng[i], mat[i]); //문자열 을 순차적으로 출력
    }*/
    
    
    //swap 연습
    
    //int i = 10, j = 20, k; //전역 변수 변경해서도 가능
    
    /*
    printf("before - i : %d / j : %d\n", i, j);
    //k = i; i = j; j = k; // 함수 처리
    swap(&i, &j); //swap 함수 호출 / &를 붙여서 주소값을 던져줌
    printf("after  - i : %d / j : %d\n", i, j);
    */
    
    
}

/*
void swap(int *i, int *j) // swap 함수 // call-by-value 로 설계 되어 있음 : 값을 넘겨 주는 것 // i, j 는 로컬 변수
{
  /*
  int k;
  printf("  before - i : %d / j : %d\n", *i, *j);
  //int k = i; i = j; j = k;
  k = *i; *i = *j; *j = k; //포인터로 변경 *을 붙여 값을 넣는다
  printf("  after  - i : %d / j : %d\n", *i, *j);
  */
  
/*  
  int k = *i; *i = *j; *j = k;
}
*/
