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

	(number % 2 == 0) ? printf("¦���Դϴ�.") : printf("Ȧ���Դϴ�.");

	return 0;
}

// ���� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt �Լ��� �����ϴ� ���̺귯��

int main() {
	double a, b, c, dis;

	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�:");
	scanf("%lf %lf %lf", &a, &b, &c);  // double ���� �����ڴ� lf�� ���

	if (a == 0)
		printf("�������� ���� %f�Դϴ�.", -c / b);

	else {

		dis = b * b - 4.0 * a * c;
		if (dis >= 0) 
		{
			printf("�������� ���� %f�Դϴ�.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("�������� ���� %f�Դϴ�.", (-b - sqrt(dis)) / (2.0 * a));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.");
	}
	return 0;
}

// ���� �ϼ��� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month, days;

	printf("���� �Է��Ͻÿ�:");
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

	printf("%d���� �ϼ��� %d�Դϴ�.", month, days);

	return 0;
}

!! �̰� �ٽ� �ϱ� !!
// ��� ���� (switch ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char op;  // char�� ������ �Է¹޴´�. ���⿡ �����ڸ� ��Ÿ���� ��ȣ�� ����ȴ�.
	printf("������ �Է��Ͻÿ�(��: 2 + 5) >>");
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
			printf("�������� �ʴ� �������Դϴ�. \n");
			break;
	}

	return 0;
}

// �ùٸ� �ﰢ�� �����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�:");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
		printf("�ùٸ� �ﰢ��");
	else
		printf("���� ���� �ﰢ��");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	printf("�ﰢ���� �� ���� ���̸� �Է��ϼ���(a b c):");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c || a + c > b || b + c > a) {
		if (a == b || a == c)
			printf("���ﰢ���Դϴ�.");
		else if (a == b || b == c || c == a)
			printf("�̵�ﰢ���Դϴ�.");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
			printf("�����ﰢ���Դϴ�.");
		else
			printf("�Ϲ� �ﰢ���Դϴ�.");
	}
	else
		printf("�������� �ʴ� �ﰢ���Դϴ�.");

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