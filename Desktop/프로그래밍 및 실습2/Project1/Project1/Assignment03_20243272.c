#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n) {   // f �Լ��� �����Ѵ�. 
	int result = 0;
	for (int i = 1; i < n+1; i++) {   
	// ����ڷκ��� �Է¹��� ������ŭ �ݺ��Ѵ�.
		result += i * i;    
	// result ���� i�� �������� 1���� n���� ���� ������.
	}
	return result;   
	// ���� result ���� ��ȯ�Ѵ�. 
}

int main() {
	int number;
	printf("���� ���� �ϳ��� �Է��Ͻÿ�.\n");
	scanf("%d", &number);
	// ����ڷκ��� ������ �Է¹޴´�. 
	int result = f(number);
	// �Լ��� ȣ���Ͽ� ����ڷκ��� �Է¹��� ���� number�� �μ��� �Է��ϰ�
	// number�� �ŵ������� ���� ���Ѵ�.
	printf("%d", result);

	return 0;
}
