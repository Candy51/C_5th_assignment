#include <stdio.h>
int main(void)
{
	int n, r, i, j, triangle[100][100] = { 0 };//�迭 ������
	printf("����� ���� ������ �Է��ϼ���(�Է��� ���ں��� 1�� �� ���� 0���� �����ϱ� ����!):");
	scanf("%d", &n);
	triangle[1][1] = 1;//�ﰢ�� �� ������� ����

	for (i = 2; i <= n+1; i++)//��
	{
		for (j = 1; j <= i; j++)//��
		{
			triangle[i][j] = triangle[i - 1][j-1] + triangle[i - 1][j];
		}

	}
	printf("Pascal Triangle Result\n========================\n");
	for (i = 1; i <= n+1; i++)//��
	{
		for (j = 1; j <= i; j++)//��
		{
			printf("%4d", triangle[i][j]);
		}
		if (j = i)
			puts("");
	}
	return 0;
}