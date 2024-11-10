/*
// Lab: 은해 계자 구현하기
#include <stdio.h>

void save();

int main(void) {
	printf("=============================================\n");
	printf("입금\t출금\t잔고\n");
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


// Lab: 한번만 초기화하기


// 하노이 탑 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi_tower(int, char, char, char);

int main() {
	hanoi_tower(2, 'A', 'B', 'C');
}

void hanoi_tower(n, from, tmp, to) {

}


// Quiz02. 은행 입출금 시스템
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIN 1234

void login() {
	printf("PIN 번호를 입력하세요:");
	int password;
	scanf("%d", &password);
	if (password == 1234) {
		printf("로그인 성공!");
		int account;
		printf("사용할 계좌를 선택하세요 (1: Kim, 2: Lee, 3: Park):");
		scanf("%d", &account);
		switch(account) {
		case '1':
			printf("안녕하세요, Kim님!\n");
			break;
		case '2':
			printf("안녕하세요, Lee님!\n");
			break;
		case '3':
			printf("안녕하세요, Park님!\n");
			break;
		default:
			printf("잘못된 선택입니다.\n");
			return;
		}
	}
	else
		printf("로그인 실패\n");
}

void deposit() {
	int choice, money;
	static int total;
	printf("1. 입금\n");
	printf("2. 출금\n");
	printf("메뉴를 선택하세요: ");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("입금할 금액을 입력하세요:");
		scanf("%d", &money);
		total += money;
		printf("입금 완료되었습니다.");
	}
	else {
		printf("출금할 금액을 입력하세요:");
		scanf("%d", &money);
		total -= money;
		printf("출금 완료되었습니다.");
	}
	printf("현재 잔액: %d", total);
}

void withdraw() {
	
}

int main() {
	login();
	deposit();
}

// deposit에서는 입금 withdraw에서는 출금하기
*/