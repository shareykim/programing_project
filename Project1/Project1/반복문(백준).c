/*
// 구구단 for문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, i;

	scanf("%d", &N);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", N, i, N * i);
	}

	return 0;
}

// 구구단 while문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, i;
	scanf("%d", &N);

	i = 1;

	while (i < 10) {
		printf("%d * %d = %d\n", N, i, N * i);
		i++;
	}

	return 0;
}


/// A+B -3 for문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, T, i;
	scanf("%d", &T);

	i, A, B = 0;

	for (i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

/// A+B -3 while문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, T, i;
	scanf("%d", &T);
	
	i = 0;

	while (i < T) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
		i++;
	}

	return 0;

}

/// 합 for문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, sum;
	i, sum = 0;
	scanf("%d", &n);

	for (i = 1; i < n + 1; i++) {
		sum += i;
	}

	printf("%d", sum);

	return 0;
}

/// 합 while문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, sum;
	i = 1;
	sum = 0;

	scanf("%d", &n);

	while (i < n + 1) {
		sum += i;
		i++;
	}

	printf("%d", sum);

	return 0;
}

/// 영수증 for문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, N, a, b, i, price;
	i, price = 0;

	scanf("%d\n%d\n", &X, &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		price += a * b;
		a, b = 0;
	}

	if (price == X)
		printf("Yes");
	else
		printf("No");

	return 0;
}

/// 코딩은 체육과목 입니다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, i, times;
	scanf("%d", &N);

	times = N / 4;

	for (i = 0; i < times; i++) {
		printf("long ");
	}

	printf("int");

	return 0;
}

/// 빠른 A+B

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// NULL 값이 비어있다 또는 존재하지 않는다>

int main() {
	int i, T, A, B;
	scanf("%d", &T);
	i = 0;

	for (i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

/// A+B - 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, T, i, n;
	scanf("%d", &T);
	i = 1;
	for (i = 1; i < T+1; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}

	return 0;
}

/// A+B - 8

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, T, i;
	scanf("%d", &T);
	i = 1;

	for (i = 1; i < T + 1; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}

/// 별 찍기 - 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, m, n;
	m, n = 1;
	scanf("%d", &N);

	for (m = 1; m < N + 1; m++) {
		for (n = 1; n < m + 1; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/// 별 찍기 - 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, n, m, i;
	scanf("%d", &N);
	n, m, i = 1;
	M = N - 1;

	for (i = 0; i < N; i++) {
		for (n = 0; n < M - i; n++) {
			printf(" ");
		}
		for (m = 0; m < i + 1; m++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/// A+B - 5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;

	A = 1;
	B = 1;

	while (A != 0 && B != 0) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}
	return 0;
}

// A+B - 4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;

	while (1) {
		scanf("%d %d", &A, &B);
		if (A == EOF && B == EOF)
			break;
		printf("%d\n", A + B);
	}
	return 0;
}

// A+B - 4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;

	while (scanf("%d %d", &A, &B) != EOF) {
		printf("%d\n", A + B);   // 줄바꿈을 해야 문제에서 말한 출력값대로 나옴
	}

	return 0;
}
*/