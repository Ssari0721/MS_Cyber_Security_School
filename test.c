//  Hello 'C' World

#include <stdio.h>
/*
int main()
{
	printf("Hello 'C' World\n");
}
*/

int main(void)
{
	
	int age, score;		// int(정수)변수 선언문 
	
	// 그냥 입력 
	printf("My age : 25\n");
	printf("\n");
	printf("100 is my point\n");
	printf("\n");
	printf("Good\nmorring\neverybody\n");
	printf("\n");
	
	//함수로 적용 
	printf("My age : %d\n", 20);
	printf("\n");
	printf("100 is my point \n", 100);
	printf("\n");
	printf("Good \nmorring \neverybody \n");
	printf("\n");
	
	//한줄로 만들기 
	printf("--------------------------------\n\n");
	printf("My age : %d \n \n%d is my point \n \nGood \nmorring \neveybody \n", 20, 100);
	printf("--------------------------------\n");
	
	//scanf 연습
	printf("당신의 나이가 어떻게 되시나요? ");
	scanf("%d", &age); 
	printf("_%d_\n", age);
	
	printf("--------------------------------\n");	
	
	printf("점수는요? ");
	scanf("%d", &score); 
	printf("_%d_\n\n", score);
	
	printf("--------------------------------\n");	
		
	//scanf 연습_01
	/*
	printf("당신의 나이가 어떻게 되시나요? "); scanf("%d", &age); 
	printf("_%d_\n", age);
	
	printf("--------------------------------\n");	
	
	printf("점수는요? "); scanf("%d", &score); 
	printf("_%d_\n", score);
	
	printf("--------------------------------\n");	
	*/
	
	//scanf 연습_02
	printf("당신의 나이가 어떻게 되시나요? "); scanf("%d", &age); 
	printf("점수는요? "); scanf("%d", &score); 
	
	printf("================================\n");	
	
	printf("My age : %d\n", age);
	printf("%d is my point \n", score);
	
	return 0;
}
