#include <stdio.h>

int main(void)
{
	int result, num1, num2, num3;

	printf("�� ���� ���� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}