/*
// Lab: ���� ���� �����ϱ�
#include <stdio.h>

void save();

int main(void) {
	printf("=============================================\n");
	printf("�Ա�\t���\t�ܰ�\n");
	printf("=============================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("=============================================\n");
	return 0;
}

void save(int amount) {
	static long balance = 0;
	if (amount >= 0)
		printf("%d\t\t", amount);
	else
		printf("\t%d\t", -amount);
	balance += amount;
	printf("%d\n", balance);
}


// Lab: �ѹ��� �ʱ�ȭ�ϱ�


// �ϳ��� ž ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi_tower(int, char, char, char);

int main() {
	hanoi_tower(2, 'A', 'B', 'C');
}

void hanoi_tower(n, from, tmp, to) {

}


// Quiz02. ���� ����� �ý���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIN 1234

void login() {
	printf("PIN ��ȣ�� �Է��ϼ���:");
	int password;
	scanf("%d", &password);
	if (password == 1234) {
		printf("�α��� ����!");
		int account;
		printf("����� ���¸� �����ϼ��� (1: Kim, 2: Lee, 3: Park):");
		scanf("%d", &account);
		switch(account) {
		case '1':
			printf("�ȳ��ϼ���, Kim��!\n");
			break;
		case '2':
			printf("�ȳ��ϼ���, Lee��!\n");
			break;
		case '3':
			printf("�ȳ��ϼ���, Park��!\n");
			break;
		default:
			printf("�߸��� �����Դϴ�.\n");
			return;
		}
	}
	else
		printf("�α��� ����\n");
}

void deposit() {
	int choice, money;
	static int total;
	printf("1. �Ա�\n");
	printf("2. ���\n");
	printf("�޴��� �����ϼ���: ");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("�Ա��� �ݾ��� �Է��ϼ���:");
		scanf("%d", &money);
		total += money;
		printf("�Ա� �Ϸ�Ǿ����ϴ�.");
	}
	else {
		printf("����� �ݾ��� �Է��ϼ���:");
		scanf("%d", &money);
		total -= money;
		printf("��� �Ϸ�Ǿ����ϴ�.");
	}
	printf("���� �ܾ�: %d", total);
}

void withdraw() {
	
}

int main() {
	login();
	deposit();
}

// deposit������ �Ա� withdraw������ ����ϱ�
*/