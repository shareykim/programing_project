/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch;
	int white_space;

	scanf("%s", &ch);

	white_space = 0;

	if (ch == ' ' || ch == '\n' || ch == '\t')
		white_space++;
	printf("%d", white_space);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number;

	scanf("%d", &number);

	(number % 2 == 0) ? printf("짝수입니다.") : printf("홀수입니다.");

	return 0;
}

// 이차 방정식
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt 함수를 포함하는 라이브러리

int main() {
	double a, b, c, dis;

	printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오:");
	scanf("%lf %lf %lf", &a, &b, &c);  // double 형식 지정자는 lf를 사용

	if (a == 0)
		printf("방정식의 근은 %f입니다.", -c / b);

	else {

		dis = b * b - 4.0 * a * c;
		if (dis >= 0) 
		{
			printf("방정식의 근은 %f입니다.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("방정식의 근은 %f입니다.", (-b - sqrt(dis)) / (2.0 * a));
		}
		else
			printf("실근은 존재하지 않습니다.");
	}
	return 0;
}

// 달의 일수를 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month, days;

	printf("달을 입력하시오:");
	scanf("%d", &month);

	switch (month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default: days = 31; break;
	}

	printf("%d월의 일수는 %d입니다.", month, days);

	return 0;
}

!! 이거 다시 하기 !!
// 산술 계산기 (switch 버전)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char op;  // char형 변수를 입력받는다. 여기에 연산자를 나타내는 기호가 저장된다.
	printf("수식을 입력하시오(예: 2 + 5) >>");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
		case '+':
			printf("%d %c %d =", a + b);
			break;
		case '-':
			printf("%d %c %d =", a - b);
			break;
		case '*':
			printf("%d %c %d =", a * b);
			break;
		case '/':
			printf("%d %c %d =", a / b);
			break;
		case '%':
			printf("%d %c %d =", a % b);
			break;
		default:
			printf("지원되지 않는 연산자입니다. \n");
			break;
	}

	return 0;
}

// 올바른 삼각형 구별하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;

	printf("삼각형의 3변을 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
		printf("올바른 삼각형");
	else
		printf("옳지 않은 삼각형");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	printf("삼각형의 세 변의 길이를 입력하세요(a b c):");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c || a + c > b || b + c > a) {
		if (a == b || a == c)
			printf("정삼각형입니다.");
		else if (a == b || b == c || c == a)
			printf("이등변삼각형입니다.");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
			printf("직각삼각형입니다.");
		else
			printf("일반 삼각형입니다.");
	}
	else
		printf("존재하지 않는 삼각형입니다.");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);

	if (score >= 70)
		printf("pass");
	else
		printf("no pass");

	return 0;
}
*/