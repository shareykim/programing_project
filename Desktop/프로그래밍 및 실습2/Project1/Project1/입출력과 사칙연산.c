/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	int sum = 0;

	scanf("%d %d", &A, &B);

	sum = A - B;

	printf("%d", sum);
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n%d\n%d\n%d\n%d", A + B, A - B, A * B, A / B, A % B);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[51];
	scanf("%s", name);
	printf("%s", name);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;
	scanf("%d", &year);

	printf("%d", year - 543);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d\n%d", &A, &B);

	int third, forth, fith;
	third = B % 10;
	forth = ((B % 100) - third)/10;
	fith = (B - (forth + third))/100;

	int third_mul, forth_mul, fith_mul;
	third_mul = third * A;
	forth_mul = forth * A;
	fith_mul = fith * A;

	int total = third_mul + forth_mul * 10 + fith_mul * 100;
	printf("%d\n%d\n%d\n%d", third_mul, forth_mul, fith_mul, total);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int y, number;
	printf("정수를 입력하세요:");
	scanf("%d", &number);
	
	for (y = 1; y < 10; y++) {
		printf("%d * %d = %d\n", number, y, number * y);
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, number;
	printf("숫자를 입력하세요:");
	scanf("%d", &number);

	for (a = 1; a <= number; a++) {
		for (b = 1; b <= a; b++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, number;
	printf("숫자를 입력하세요:");
	scanf("%d", &number);

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

int main() {
	int x, y, number;
	scanf("%d", &number);

	for (x = 0; x < number; x++) {
		for (y = 1; y < x + 1; y++) {
			printf("*");
		}
		printf("\n");
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int A, B, C;

	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld", A + B + C);

	return 0;
}

#include <stdio.h>

int main() {
	printf("\\    /\\\n");
	printf(" )  ( \')\n");
	printf("(  /  )\n");
	printf(" \\(__)|\n");

	return 0;
}


#include <stdio.h>

int main() {
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\ \n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|");

	return 0;
}
*/