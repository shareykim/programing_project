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
	char num1 = 128; // char�� ������ �� �ִ� �ִ� 127���� ū ���� �Ҵ�
	unsigned char num2 = 256; // unsigned char�� ������ �� �ִ� �ִ� 255���� ū ���� �Ҵ�

	printf("%d %u\n", num1, num2);

	return 0;
}

// -128 0: ������ �� �ִ� ������ �Ѿ�Ƿ� �ּڰ����� �ٽ� ���� 

#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;  

	printf("num1�� ũ��: %d\n", size);

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

// char�� 1����Ʈ short�� 2����Ʈ int�� 4����Ʈ long�� 4����Ʈ long long�� 8����Ʈ


#include <stdio.h>
#include <limits.h>  // �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

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

/// ��������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float price1, price2, final1, final2;

	printf("ù ��° ����� �ֹ� �ݾ��� �Է��ϼ���:");
	scanf("%f", &price1);
	printf("�� ��° ����� �ֹ� �ݾ��� �Է��ϼ���:");
	scanf("%f", &price2);

	final1 = price1 * 1.10;
	final2 = price2 * 1.10;

	printf("ù ��° ����� ���� ��� �ݾ�: %.2f\n", final1);
	printf("�� ��° ����� ���� ���� �ݾ�: %.2f\n", final2);

	return 0;
}


/// ��������2


/// ��������3: �Ÿ��� ���� �Ҹ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float distance, fuel;
	printf("�ڵ����� ���� (1���ʹ� ���� ������ �Ÿ�)�� �Է��ϼ��� (km/1): ");
	scanf("%f", &distance);

	printf("���� ���� �ʱ��� ���ᷮ�� �Է��ϼ��� (1): ");
	scanf("%f", &fuel);

	printf("�־��� ����� ������ �� �ִ� �Ÿ��� �� %.2fkm�Դϴ�.", fuel * distance);

	return 0;

}
*/