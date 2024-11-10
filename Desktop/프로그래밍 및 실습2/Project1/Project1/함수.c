/*
#include <stdio.h>

void print_stars() {
	for (int i = 0; i < 30; i++) {
		printf("*");
	}
}

int main() {
	print_stars();
	printf("\nHello World\n");
	print_stars();

	return 0;
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void happyBirthday(int age) {
	
	printf("\n사랑하는 친구의 %d번째 생일을 축하합니다.", age);

}

int main() {
	int age;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	happyBirthday(age);

	return 0;
}

// max() 함수를 호출하여 사용자가 입력한 값 중에서 더 큰 값을 찾아보자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) {
	if (a > b)
		printf("더 큰값은 %d입니다.", a);
	else
		printf("더 큰값은 %d입니다.", b);
}

int main() {
	int a, b;
	printf("정수를 입력하시오:");
	scanf("%d",&a);
	printf("정수를 입력하시오:");
	scanf("%d", &b);

	max(a, b);

	return 0;
}

// Lab: 정수의 합을 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() {
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);

	return value;
}

int add(int x, int y) {
	return x + y;
}

int main() {

	int x = get_integer();
	int y = get_integer();

	int sum = add(x, y);
	printf("두 수의 합은 %d입니다.", sum);

	return 0;
}

// Lab: 팩토리얼 계산 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int number) {
	int result = 1;
	for (int i = number; i > 0; i--) {
		result = result * i;
	}
	return result;
}

int main() {
	int number;
	printf("알고 싶은 팩토리얼의 값은? ");
	scanf("%d", &number);
	int result = fact(number);

	printf("%d!의 값은 %d입니다.", number, result);

	return 0;
}

// Lab: 온도 변환기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
	printf("================================\n");
	printf(" 'c' 섭씨 온도에서 화씨 온도로 변환\n");
	printf(" 'f' 화씨 온도에서 섭씨 온도로 변환\n");
	printf(" 'q' 종료\n");
	printf("================================\n");
}

double C2F(double c_temp) {
	double f_temp = c_temp * 1.8 + 32;
	return f_temp;
}

double F2C(double f_temp) {
	double c_temp = (f_temp - 32) / 1.8;
	return c_temp;
}

char get_char() {
	char choice;
	printf("메뉴에서 선택하세요.");
	scanf("%c", &choice);
	return choice;
}

int main() {
	char menu;
	double temp;

	while (1){
		printMenu();
		menu = get_char();
		
		if (menu == 'q')
			break;

		else if (menu == 'c') {
			printf("섭씨 온도: ");
			scanf("%lf", &temp);
			printf("화씨온도: %lf\n", C2F(temp));
		}

		else if (menu == 'f') {
			printf("화씨 온도: ");
			scanf("%lf", &temp);
			printf("섭씨온도: %lf\n", F2C(temp));
		}
		get_char();
	}
	return 0;
}

// Lab: 조합 계산하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int number) {
	int result = 1;
	for (int i = number; i > 0; i--) {
		result = result * i;
	}
	return result;
}

int get_integer() {
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);

	return value;
}

int combination(int n, int r) {
	int result = fact(n) / (fact(n - r) * fact(r));

	printf("C(%d, %d) = %d", n, r, result);
}

int main() {
	int n = get_integer();
	int r = get_integer();

	combination(n, r);

	return 0;
}

// 난수 발생기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45
int main() {
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++)
		printf("%d ", 1 + rand() % MAX);

	return 0;
}

// Lab: 동전 던지기 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);
int main() {
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));
	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d", tails);

	return 0;
}

int coin_toss(void) {
	int heads = rand()%2;
	return heads;
}

// Lab: 자동차 경주 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void disp_car(int car_number, int distance) {
	int i;
	
	printf("CAR #%d", car_number);

	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}

int main() {
	int i;
	int car1_dist = 0, car2_dist = 0, car3_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 20; i++) {
		system("cls");  // 화면을 지운다
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		car3_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		disp_car(3, car3_dist);
		Sleep(1000);
	}
	return 0;
}

// Lab: 불규칙하게 점 그리기

#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int i, x, y, red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	
	for (i = 0; i < 10000; i++) {
		x = rand() % 300;
		y = rand() % 300;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
	return 0;
}

// Lab: 나무 높이 측정

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double distance, height, angle, tree_height, radians;
	
	printf("나무까지의 거리(단위: 미터): ");
	scanf("%lf", &distance);

	printf("측정자의 키(단위: 미터): ");
	scanf("%lf", &height);

	printf("각도(단위: 도): ");
	scanf("%lf", &angle);

	radians = angle * (3.141592 / 180.0);

	tree_height = height + tan(radians) * distance;
	printf("나무의 높이(단위: 미터): %lf", tree_height);

	return 0;
}

// Mini Project 1: 사용자가 입력한 실수들의 합을 계산하는 프로그램을 작성해보자.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_cal(double number1, double number2) {
	double sum_number = number1 + number2;
	return sum_number;
}

int main() {
	double number1, number2, sum;
	
	printf("실수를 입력하시오: ");
	scanf("%lf", &number1);

	printf("실수를 입력하시오: ");
	scanf("%lf", &number2);

	sum = sum_cal(number1, number2);
	printf("실수의 합: %lf", sum);

	return 0;
}

// 도전문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double add(double number1, double number2);
double sub(double number1, double number2);
double mul(double number1, double number2);
double divi(double number1, double number2);  // changed the name to avoid conflict with `div` from stdlib
void disp_menu();

int main() {
	double num1, num2, result;
	char choice;

	disp_menu();
	scanf(" %c", &choice);  // add space before %c to consume any leftover newline character

	switch (choice) {
	case 'p':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		result = add(num1, num2);
		printf("Result: %.2lf\n", result);
		break;
	case 's':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		result = sub(num1, num2);
		printf("Result: %.2lf\n", result);
		break;
	case 'm':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		result = mul(num1, num2);
		printf("Result: %.2lf\n", result);
		break;
	case 'd':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		if (num2 == 0) {
			printf("Error: Division by zero is not allowed.\n");
		}
		else {
			result = divi(num1, num2);
			printf("Result: %.2lf\n", result);
		}
		break;
	default:
		printf("Invalid choice!\n");
		break;
	}

	return 0;
}

double add(double number1, double number2) {
	return number1 + number2;
}

double sub(double number1, double number2) {
	return number1 - number2;
}

double mul(double number1, double number2) {
	return number1 * number2;
}

double divi(double number1, double number2) {
	return number1 / number2;
}

void disp_menu() {
	printf("==============================\n");
	printf("더하기 사용: p\n");
	printf("빼기 사용: s\n");
	printf("곱하기 사용: m\n");
	printf("나누기 사용: d\n");
	printf("==============================\n");
}

// Lab 연습: 게임 확률
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int start, goal, money, times, i, chance;
	goal = 250;
	money = 1;
	times = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++) {
		start = 50;
		while (start > 0 && start < goal) {
			chance = rand() % 2;

			if (chance == 0)
				start -= money;
			else
				start += money;
		}
		if (start >= 250)
			times++;
	}
	printf("목표금액에 도달한 횟수: %d 회 \n", times);
	return 0;
}

// Lab 연습: 동전 던지기 게임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	int coin, choice;
	char go;

	while(1){
		coin = rand() % 2;
		printf("앞면 또는 뒷면(1 또는 0):");
		scanf("%d", &choice);
		
		if (coin == choice)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까? (y 또는 n):");
		scanf(" %c", &go);

		if (go == 'n')
			break;
	}
}
*/