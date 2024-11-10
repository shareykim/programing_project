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
	
	printf("\n����ϴ� ģ���� %d��° ������ �����մϴ�.", age);

}

int main() {
	int age;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	happyBirthday(age);

	return 0;
}

// max() �Լ��� ȣ���Ͽ� ����ڰ� �Է��� �� �߿��� �� ū ���� ã�ƺ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) {
	if (a > b)
		printf("�� ū���� %d�Դϴ�.", a);
	else
		printf("�� ū���� %d�Դϴ�.", b);
}

int main() {
	int a, b;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&a);
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &b);

	max(a, b);

	return 0;
}

// Lab: ������ ���� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() {
	int value;
	printf("������ �Է��Ͻÿ�: ");
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
	printf("�� ���� ���� %d�Դϴ�.", sum);

	return 0;
}

// Lab: ���丮�� ��� �Լ�
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
	printf("�˰� ���� ���丮���� ����? ");
	scanf("%d", &number);
	int result = fact(number);

	printf("%d!�� ���� %d�Դϴ�.", number, result);

	return 0;
}

// Lab: �µ� ��ȯ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
	printf("================================\n");
	printf(" 'c' ���� �µ����� ȭ�� �µ��� ��ȯ\n");
	printf(" 'f' ȭ�� �µ����� ���� �µ��� ��ȯ\n");
	printf(" 'q' ����\n");
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
	printf("�޴����� �����ϼ���.");
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
			printf("���� �µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf\n", C2F(temp));
		}

		else if (menu == 'f') {
			printf("ȭ�� �µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf\n", F2C(temp));
		}
		get_char();
	}
	return 0;
}

// Lab: ���� ����ϱ�
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
	printf("������ �Է��Ͻÿ�: ");
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

// ���� �߻���
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

// Lab: ���� ������ ����
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
	printf("������ �ո�: %d\n", heads);
	printf("������ �޸�: %d", tails);

	return 0;
}

int coin_toss(void) {
	int heads = rand()%2;
	return heads;
}

// Lab: �ڵ��� ���� ���α׷�
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
		system("cls");  // ȭ���� �����
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

// Lab: �ұ�Ģ�ϰ� �� �׸���

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

// Lab: ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double distance, height, angle, tree_height, radians;
	
	printf("���������� �Ÿ�(����: ����): ");
	scanf("%lf", &distance);

	printf("�������� Ű(����: ����): ");
	scanf("%lf", &height);

	printf("����(����: ��): ");
	scanf("%lf", &angle);

	radians = angle * (3.141592 / 180.0);

	tree_height = height + tan(radians) * distance;
	printf("������ ����(����: ����): %lf", tree_height);

	return 0;
}

// Mini Project 1: ����ڰ� �Է��� �Ǽ����� ���� ����ϴ� ���α׷��� �ۼ��غ���.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_cal(double number1, double number2) {
	double sum_number = number1 + number2;
	return sum_number;
}

int main() {
	double number1, number2, sum;
	
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &number1);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &number2);

	sum = sum_cal(number1, number2);
	printf("�Ǽ��� ��: %lf", sum);

	return 0;
}

// ��������
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
	printf("���ϱ� ���: p\n");
	printf("���� ���: s\n");
	printf("���ϱ� ���: m\n");
	printf("������ ���: d\n");
	printf("==============================\n");
}

// Lab ����: ���� Ȯ��
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
	printf("��ǥ�ݾ׿� ������ Ƚ��: %d ȸ \n", times);
	return 0;
}

// Lab ����: ���� ������ ����

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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0):");
		scanf("%d", &choice);
		
		if (coin == choice)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n):");
		scanf(" %c", &go);

		if (go == 'n')
			break;
	}
}
*/