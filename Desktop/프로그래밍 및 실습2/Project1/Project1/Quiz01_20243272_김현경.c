/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, minus_number, plus_number, i, numbers;
	scanf("%d", &N);            // 사용자로부터 정수 N을 입력받는다
	plus_number = 0;
	minus_number = 0;

	for (i = 0; i < N; i++) {   // N개의 정수를 입력받는다 (반복문 사용)
		scanf("%d", &numbers);  // 양수, 음수 판별할 정수를 사용자로부터 입력받는다
		
		if (numbers > 0)
			plus_number++;      // 사용자가 입력한 정수가 양수면 plus_number의 값을 +1 한다
		else
			minus_number++;     // 사용자가 입력한 정수가 음수면 minus_number의 값을 -1 한다
	}

	printf("양의 정수: %d개\n", plus_number);
	printf("음의 정수: %d개", minus_number);

	return 0;
}
*/