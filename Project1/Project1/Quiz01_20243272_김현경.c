/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, minus_number, plus_number, i, numbers;
	scanf("%d", &N);            // ����ڷκ��� ���� N�� �Է¹޴´�
	plus_number = 0;
	minus_number = 0;

	for (i = 0; i < N; i++) {   // N���� ������ �Է¹޴´� (�ݺ��� ���)
		scanf("%d", &numbers);  // ���, ���� �Ǻ��� ������ ����ڷκ��� �Է¹޴´�
		
		if (numbers > 0)
			plus_number++;      // ����ڰ� �Է��� ������ ����� plus_number�� ���� +1 �Ѵ�
		else
			minus_number++;     // ����ڰ� �Է��� ������ ������ minus_number�� ���� -1 �Ѵ�
	}

	printf("���� ����: %d��\n", plus_number);
	printf("���� ����: %d��", minus_number);

	return 0;
}
*/