/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
	float diameter;
	float radius;
	float area;

	scanf("%f", &diameter);

	radius = diameter / 2;
	area = radius * radius * M_PI;

	printf("%f\n", area);
}

#include <stdio.h>

int main() {
	int num1 = 15;
	int num2 = 27;
	int num3 = 3;

	num1 %= num3;
	num2 %= num3;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{	
	int a, b, c, d, number;
	scanf("%d" &number);

	

}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, f, number;
	scanf("%d", &number);

	a = number % 10;
	number = number / 10;
	b = number % 10;
	number = number / 10;
	c = number % 10;
	number = number / 10;
	d = number % 10;
	number = number / 10;
	f = number % 10;
	number = number / 10;

	printf("%d %d %d %d %d", a, b, c, d, f);

	return 0;
}
*/