#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a = 20, n = 20;
//	while (a > 1)
//	{
//		a = a / 2;
//		n += a;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	char arr[13] = { 0 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		arr[i] = ' ';
//	}
//
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		arr[6 + i] = '*';
//		arr[6 - i] = '*';
//
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//	}
//	
//	for (i = 6; i > 0; i--)
//	{
//		int j = 0;
//		arr[6 + i] = ' ';
//		arr[6 - i] = ' ';
//
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 99999; i++)
//	{
//		int tmp = i;
//		int count = 0;//n
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		a = n + a * 10;
		sum += a;
	}
	printf("sum=%d\n", sum);
	return 0;
}