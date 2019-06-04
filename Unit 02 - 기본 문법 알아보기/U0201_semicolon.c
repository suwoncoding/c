#include <stdio.h>

int main()
{
	printf("Hello, world\n");	// C 언어는 구문이 끝날 때 ; (세미콜론)을 붙입니다.	
	
	// 세미콜론을 생략하면 컴파일 에러가 발생하게 되므로 주의하세요. 
	
	// 단, 다음과 같이 여러 줄로 되어 있지만 내용이 계속 이어지는 문법은 세미콜론을 붙이지 않습니다.
	int a = 10;
	
	if (a > 10)
	{
	    printf("a");
	}
	
	int i;
	for (i = 0; i < 10; i++)
	{
	    printf("Hello, world!\n");
	}
	
	return 0;
}
