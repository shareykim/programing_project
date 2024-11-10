#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n) {   // f 함수를 정의한다. 
	int result = 0;
	for (int i = 1; i < n+1; i++) {   
	// 사용자로부터 입력받은 정수만큼 반복한다.
		result += i * i;    
	// result 값에 i의 제곱수를 1부터 n까지 더해 나간다.
	}
	return result;   
	// 최종 result 값을 반환한다. 
}

int main() {
	int number;
	printf("양의 정수 하나를 입력하시오.\n");
	scanf("%d", &number);
	// 사용자로부터 정수를 입력받는다. 
	int result = f(number);
	// 함수를 호출하여 사용자로부터 입력받은 정수 number을 인수로 입력하고
	// number의 거듭제곱의 합을 구한다.
	printf("%d", result);

	return 0;
}
