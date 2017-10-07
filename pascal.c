#include <stdio.h>
int main(void)
{
	int n, r, i, j, triangle[100][100] = { 0 };//배열 선언&초기화함
	printf("출력할 단의 개수를 입력하세요:");
	scanf("%d", &n);
	triangle[1][1] = 1;//삼각형 맨 꼭대기의 숫자

	for (i = 2; i <= n; i++)//행
	{
		for (j = 1; j <= i; j++)//열
		{
			triangle[i][j] = triangle[i - 1][j-1] + triangle[i - 1][j];
		}

	}
	printf("Pascal Triangle Result\n========================\n");
	for (i = 1; i <= n; i++)//행
	{
		for (j = 1; j <= i; j++)//열
		{
			printf("%10d", triangle[i][j]);
		}
		if (j = i)
			puts("");
	}
	return 0;
}