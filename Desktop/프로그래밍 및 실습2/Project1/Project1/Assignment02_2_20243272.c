// Assignment02_2
/*
#include <stdio.h>

int main() {
	int i;     // ������ ���� Ƚ���� �����ϴ� ������ ���������� �����Ѵ�.
	float initial_area, reduction, later;  // ������ ������ �Ǽ������� �����Ѵ�. 
	i = 0;
	initial_area = 1.0;
	later = initial_area / 100.0;          // �Ǽ������� �������� �ʰ� ���������� 
	// �����ϸ� 100�� �������� �� ���� 0�� �Ǳ� ������ �ڵ尡 ����� ������� �ʴ´�. 
	reduction = 0.5;
	while (initial_area > later) {   // initial_area�� �Ҵ�� ���� �ʱ� ������ 1/100���� Ŭ ������ �ݺ��Ѵ�.
		// ���ų� �۾����� �ݺ����� �����Ѵ�.
		initial_area = initial_area * reduction;
		// �ݺ����� ����� ������ reduction(������)�� initail_area�� ���Ѵ�.
		i++;
		// ���� ���� Ƚ���� �ݺ����� ����� ������ �����Ѵ�.
	}

	printf("���̸� %d�� ����� ���� ������ 1/100�� �پ��ϴ�.", i);
	return 0;
}
*/