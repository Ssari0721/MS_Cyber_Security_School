#include <stdio.h>

//swap 연습

// 1. void swap(int i, int j);
void swap(int *i, int *j); // swap 함수 proto type 선언

int main()
{
  int i = 10, j = 20, k; //전역 변수 변경해서도 가능

  printf("before - i : %d / j : %d\n", i, j);
  //k = i; i = j; j = k; // 함수 처리
  // 1. swap(i, j);
  swap(&i, &j); //swap 함수 호출 / &를 붙여서 주소값을 던져줌
  printf("after  - i : %d / j : %d\n", i, j);
}

// swap 함수
// 1. void swap(int i, int j)
void swap(int *i, int *j)
// call-by-value 로 설계 되어 있음 : 값을 넘겨 주는 것 // i, j 는 로컬 변수
{
  int k; // 임시로 값을 저장 할 변수 설정 / 전역변수
  //1. printf("  before - i : %d / j : %d\n", i, j);
  printf("  before - i : %d / j : %d\n", *i, *j);
  // 1. int k = i; i = j; j = k;
  k = *i; *i = *j; *j = k; //포인터로 변경-  *을 붙여 값을 넣는다
  // 1. printf("  after  - i : %d / j ; %d\n", i, j);
  printf("  after  - i : %d / j : %d\n", *i, *j);
}
