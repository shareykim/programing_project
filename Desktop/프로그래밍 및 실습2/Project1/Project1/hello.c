/*
#include <stdio.h>

int main()
{
	printf("Hello, World!");
	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	num1 = 10;
	num2 = 20;
	num3 = 30;

	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}



#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20;

	printf("%d %d", num1, num2);

	return 0;
}

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("좌석의 행을 입력하세요:");
	scanf_s("%d", &a);

	printf("좌석의 열을 입력하세요:");
	scanf_s("%d", &b);

	if (a >= 1 && a <= 5) {
		printf("해당 좌석의 가격은 15000원입니다.");
	}
	else {
		printf("해당 좌석의 가격은 10000원입니다.");
	}

}

#include <stdio.h>

int main()
{
	int a, b, c, number;
	
	scanf_s("%d", &number);

	for (a = 0; a < number; a++) 
	{
		printf("\n%*s", a, "");
		for (b = a + 1; b <= number; b++)
			printf("%d", b);
		for (c = number - 1; c > a; c--)
			printf("%d", c);
	} 
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);  
	int div = 10;
	int result = 0;

	while (number > 0) 
	{
		result = result * div;   
		result = result + number % div;   
		number = number / div;   
	}

	printf("%d", result);
}
*/
