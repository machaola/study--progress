#include <stdio.h>


//int main()
//{
//	int a[6] = { 6,3,8,2,5 };
//	int i, j, k;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				k = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = k;
//			}
//		}
//	}
//	a[5] = a[4];
//	a[4] = 7;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[n] = { 0 };
//	int i, k = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > 0)
//		{
//			printf("%d ", a[i]);
//			k++;
//		}
//	}
//	if (k == 0)
//		printf("NULL");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[n] = { 0 };
//	int i;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	printf("平均值为：%.2f\n", sum / n);
//	printf("逆序输出的结果是：");
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a[9];
//	int i;
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		int t = 0;
//		for (int j = 0; j < 9; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	float sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		sum += a[i + 1];
//	}
//	printf("最后得分：%.2f", sum / 7);
//	return 0;
//}