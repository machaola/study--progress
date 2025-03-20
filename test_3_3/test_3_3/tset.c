#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[4][4] = { 0 };
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int max = 0, site1 = 0, site2 = 0;
//	for (i = 0; i <4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				site1 = i;
//				site2 = j;
//			}
//		}
//	}
//
//	printf("最大元素：%d\n", max);
//	printf("下标：%d,%d", site1, site2);
//	return 0;
//}

//int main()
//{
//	int p[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			p[i][0] = 1;
//			p[i][i] = 1;
//		}
//	}
//
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <i+1; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[4][4] = { 0 };
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int n = 0, l = 0, count = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > n)
			{
				n = arr[i][j];
				l = j;
			}
		}

		for (k = 0; k < 4; k++)
		{
			if (n <= arr[k][j])
			{
				count++;
			}
		}

		if (count == 4)
		{
			printf("%d", n);
			break;
		}
	}

	return 0;
}