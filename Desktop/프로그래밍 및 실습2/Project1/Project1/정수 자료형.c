/*
#include <stdio.h>

int main()
{
	char num1 = -10;
	short num2 = 30000;
	int num3 = -1234567890;
	long num4 = 1234567890;
	long long num5 = -1234567890123456789;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;

}


#include <stdio.h>

int main()
{
	char num1 = 128; // char에 저장할 수 있는 최댓값 127보다 큰 수를 할당
	unsigned char num2 = 256; // unsigned char에 저장할 수 있는 최댓값 255보다 큰 수를 할당

	printf("%d %u\n", num1, num2);

	return 0;
}

// -128 0: 저장할 수 있는 범위를 넘어서므로 최솟값부터 다시 시작 

#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;  

	printf("num1의 크기: %d\n", size);

	return 0;
}

#include <stdio.h>

int main()
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char),
		sizeof(short),
		sizeof(int),
		sizeof(long),
		sizeof(long long));

	return 0;
}

// char는 1바이트 short는 2바이트 int는 4바이트 long은 4바이트 long long은 8바이트


#include <stdio.h>
#include <limits.h>  // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}

#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128;
	int16_t num2 = 32767;
	int32_t num3 = 2147483647;
	int64_t num4 = 9223372036854775807;
	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;

	return 0;
}

#include <stdio.h>

int main()
{
	printf("%d %d %d %d %d",
		sizeof(signed short int),
		sizeof(unsigned char),
		sizeof(signed int),
		sizeof(unsigned long long int),
		sizeof(long));

	return 0;
}


#include <stdio.h>

int main()
{
	unsigned char num1 = 256;
	unsigned short int num2 = 65536;
	long long num3 = 922337206854775808;

	printf("%u %u %lld", num1, num2, num3);

	return 0;
}

#include <stdio.h>

int main()
{
	short num1;
	long long num2;

	printf("%d\n", sizeof(num1)+sizeof(num2)+sizeof(int));

	return 0;
}

#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MAX;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	long long num5 = LLONG_MAX;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}

#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	int32_t num3 = INT32_MAX;
	uint64_t num4 = UINT64_MAX;

	printf("%d %u %d %llu\n", num1, num2, num3, num4);

	return 0;
}


#include <stdio.h>

int main()
{
	unsigned short num1;
	unsigned num2;
	char num3;

	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d\n", num1, num2, num3);

	return 0;
}

#include <stdio.h>

int main()
{
	char num1;
	short num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));

	return 0;

}

/// 도전문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float price1, price2, final1, final2;

	printf("첫 번째 사람의 주문 금액을 입력하세요:");
	scanf("%f", &price1);
	printf("두 번째 사람의 주문 금액을 입력하세요:");
	scanf("%f", &price2);

	final1 = price1 * 1.10;
	final2 = price2 * 1.10;

	printf("첫 번째 사람의 최종 기분 금액: %.2f\n", final1);
	printf("두 번째 사람의 최종 지불 금액: %.2f\n", final2);

	return 0;
}


/// 도전문제2


/// 도전문제3: 거리와 연료 소모량 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float distance, fuel;
	printf("자동차의 연비 (1리터당 주행 가능한 거리)를 입력하세요 (km/1): ");
	scanf("%f", &distance);

	printf("현재 연료 탱그의 연료량을 입력하세요 (1): ");
	scanf("%f", &fuel);

	printf("주어진 연료로 주행할 수 있는 거리는 약 %.2fkm입니다.", fuel * distance);

	return 0;

}
*/