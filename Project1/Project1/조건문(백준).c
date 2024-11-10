/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > B) {
		printf(">");
	}
	if (A < B) {
		printf("<");
	}
	if (A == B) {
		printf("==");
	}
	return 0;
}

// 성적 분석
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);

	if (score >= 90) {
		printf("A");
	}
	else if(score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}

	return 0;
}

// 윤년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("1");
	}
	else if (year % 100 == 0 && year % 400 != 0) {
		printf("0");
	}
	else if (year % 4 == 0) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;	
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d\n%d", &x, &y);

	if (x < 0 && y < 0) {
		printf("3");
	}
	if (x > 0 && y < 0) {
		printf("4");
	}
	if (x < 0 && y>0) {
		printf("2");
	}
	if (x > 0 && y > 0) {
		printf("1");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	if (M >= 45) {
		printf("%d %d", H, M - 45);
	}
	if (H != 0 && M < 45) {
		printf("%d %d", H - 1, M + 15);
	}
	if (H == 0 && M < 45) {
		printf("%d %d", 23, M + 15);
	}

	return 0;
}

// 오븐 시계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, minute;
	scanf("%d %d\n%d", &A, &B, &C);

	minute = B + C;

	if (A <= 23 && minute < 60) {
		printf("%d %d", A, minute);
	}
	if (A + minute / 60 <= 23 && minute >= 60) {
		printf("%d %d", A + minute / 60, minute % 60);
	}
	if (A + minute / 60 > 23 && minute >= 60) {
		printf("%d %d", A + minute / 60 - 24, minute % 60);
	}

	return 0;
}

// 주사위 세개
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, price;
	scanf("%d %d %d", &A, &B, &C);

	price = 0;

	if (A == B && B == C)  // 연속된 비교는 할 수 없음
		price = 10000 + A * 1000;

	else if (A == B || A == C || B == C)
		price = 1000 + (A == B ? A : (A == C ? A : B)) * 100;  // 조건 연산자 사용
	else {
		if (A > B && A > C)
			price = A * 100;
		else if (B > C)
			price = B * 100;
		else
			price = C * 100;
	}


	printf("%d", price);

	return 0;
}
*/