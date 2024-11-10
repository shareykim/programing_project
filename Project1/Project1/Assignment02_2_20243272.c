// Assignment02_2
/*
#include <stdio.h>

int main() {
	int i;     // 종이의 접은 횟수를 지정하는 변수는 정수형으로 선언한다.
	float initial_area, reduction, later;  // 나머지 변수는 실수형으로 선언한다. 
	i = 0;
	initial_area = 1.0;
	later = initial_area / 100.0;          // 실수형으로 선언하지 않고 정수형으로 
	// 선언하면 100을 나누었을 때 값이 0이 되기 때문에 코드가 제대로 실행되지 않는다. 
	reduction = 0.5;
	while (initial_area > later) {   // initial_area에 할당된 수가 초기 면적의 1/100보다 클 때까지 반복한다.
		// 같거나 작아지면 반복문을 종료한다.
		initial_area = initial_area * reduction;
		// 반복문이 실행될 때마다 reduction(감소율)을 initail_area에 곱한다.
		i++;
		// 종이 접은 횟수는 반복문이 실행될 때마다 증가한다.
	}

	printf("종이를 %d번 접어야 원래 면적의 1/100로 줄어듭니다.", i);
	return 0;
}
*/