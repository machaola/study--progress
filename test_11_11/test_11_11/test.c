#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int  b;
//    while (scanf("%d ", &b) != EOF)
//    {
//        for (int i = 0; i < b; i++)
//        {
//            for (int j = 0; j < b; j++)
//            {
//                if (i == j || i + j == b - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int arr1[a][b] = {};
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < a; i++)
//		{
//			int j = 0;
//			for (j = 0; j < b; j++)
//			{
//				scanf("%d ", arr1[a][b]);
//			}
//		}
//
//		int arr2[b][a] = {};
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < b; j++)
//			{
//				arr2[b][a] = arr1[a][b];
//			}
//		}
//
//		for (i = 0; i < b; i++)
//		{
//			for (j = 0; j < a; j++)
//			{
//				printf("%d ", arr2[b][a]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%f ", (sum / 10.0));
//	return 0;
//}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}