
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열 선언 예제
int main() {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;
	
	for (i = 0; i < 5; i++) {
		printf("scores[%d]=%d\n", i, scores[i]);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

void menu();

int main() {
	int seat[size] = { 0 };
	int ans2, i;
	char ans1;

	while (1) {
		printf("좌석을 예약하시겠습니까? (y 또는 n)");
		scanf("%c", &ans1);
		if (ans1 == 'n')
			break;
		menu();
		for (i = 0; i < size; i++)
			printf("%d ", seat[i]);
		printf("\n");
			
		printf("몇번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans2);
		if (seat[ans2-1] == 0)
			seat[ans2-1] = 1;
		else
			printf("이미 예약된 자리입니다.(다른 좌석을 선택하세요)\n");
	}
}

void menu() {
	printf("--------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------------------------\n");
}

// 선택 정렬
#include <stdio.h>
#define SIZE 10

int main() {
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least, count = 0;

	for (i = 0; i < SIZE; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++) {
			if (list[least] > list[j])
				least = j;
			count++;
		}
		temp = list[i];
		list[i] = list[j];
		list[j] = temp;
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d", list[i]);
	}
	printf("\n");
	printf("%d", count);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int binary_search(int list[], int n, int key);

int main() {
	int key;
	int grade[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);
	printf("탐색 결과= %d\n", binary_search(grade, SIZE, key));

	return 0;
}

int binary_search(int list[], int n, int key) {
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소: %u\n", &i);
	printf("c의 주소: %u\n", &c);
	printf("f의 주소: %u\n", &f);
	return 0;
}

void reverse(int* start, int* end) {
	while (start < end) {
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, arr + len - 1);

	for (int i = 0; i < len; i++) {
		print("%d", arr[i]);
	}
	return 0;
}  

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char board[3][3];
	int x, y, i;
	int k = 0;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	while (k < 9) {
		printf("(x, y) 좌표: ");
		scanf("%d %d", &x, &y);
		if (board[x][y] == ' ') {
			board[x][y] = (k % 2 == 0) ? 'X' : 'O';
			k++;
		}
		else {
			printf("다른 좌표를 선택하세요.");
		}
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}
*/