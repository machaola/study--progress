#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int rot(char x[], char y[], int sz)
//{
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			int n = i + j;
//			if ((i + j) > sz)
//			{
//				n = i + j - sz;
//			}
//			if (x[n] == y[j])
//			{
//				count++;
//			}
//		}
//		if (count == sz)
//			return 1;
//	}
//	return 0;
//}

//int find(int arr[][5], int H, int L, int n)
//{
//	int i = 0, j = L-1;
//	while (i < H && j > 0)
//	{
//		if (arr[i][j] == n)
//			return 1;
//		else if (arr[i][j] > n)
//			j--;
//		else
//			i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][5] = { {1,2,3,4,5},{2,3,4,5,6 },{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9} };
//	int n = 0;
//	scanf("%d", &n);
//	int m = find(arr, 5, 5, n);
//	printf("%d", m);
//	return 0;
//}

//int main()
//{
//	char k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if (((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd')) == 3)
//			printf("Ð×ÊÖÊÇ%c", k);
//	}
//
//	return 0;
//}

int main()
{
	int arr[10][10] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}