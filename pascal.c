#include <stdio.h>
int main(void)
{
	int n, r, i, j, triangle[100][100] = { 0 };//�迭 ����&�ʱ�ȭ��
	printf("����� ���� ������ �Է��ϼ���:");
	scanf("%d", &n);
	triangle[1][1] = 1;//�ﰢ�� �� ������� ����

	for (i = 2; i <= n; i++)//��
	{
		for (j = 1; j <= i; j++)//��
		{
			triangle[i][j] = triangle[i - 1][j-1] + triangle[i - 1][j];
		}

	}
	printf("Pascal Triangle Result\n========================\n");
	for (i = 1; i <= n; i++)//��
	{
		for (j = 1; j <= i; j++)//��
		{
			printf("%10d", triangle[i][j]);
		}
		if (j = i)
			puts("");
	}
	return 0;
}