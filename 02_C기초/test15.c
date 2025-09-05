#include <stdio.h>
#include <time.h>	// 시간관련 헤더 파일
#include <linux/kernel.h>	// printk 사용을 위한 헤더

int main()
{
	//time_t t = datetime;
	time_t t;
	time(&t); //현재 시간
	//func();
	
	printk("Hello Ssari!(%s) \n", ctime(&t)); //cttime - 시간을 문자열로 바꿔줌
}
