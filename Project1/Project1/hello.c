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
	printf("�¼��� ���� �Է��ϼ���:");
	scanf_s("%d", &a);

	printf("�¼��� ���� �Է��ϼ���:");
	scanf_s("%d", &b);

	if (a >= 1 && a <= 5) {
		printf("�ش� �¼��� ������ 15000���Դϴ�.");
	}
	else {
		printf("�ش� �¼��� ������ 10000���Դϴ�.");
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
