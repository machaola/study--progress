#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void Rotate(char* p, int x, int sz)
//{
//	int i = 0, j = 0;
//	char temp = 0;
//	char* s = p;
//	for (i = 0; i < x; i++)
//	{
//		p = s;
//		temp = *s;
//		for (j = 2; j < sz; j++)
//		{
//			*p = *(p + 1);
//			p++;
//		}
//		*p = temp;
//	}
//}
//
//int main()
//{
//	char str[] = "ABCD";
//	int i = 0;
//	int sz = sizeof(str) / sizeof(str[0]);
//	scanf("%d", &i);
//	Rotate(str, i, sz);
//	printf("%s", str);
//	return 0;
//}

//size_t my_strlen(char*p)
//{
//	int count = 0;
//	while (*p)
//	{
//		count++;
//	}
//	return (size_t)count;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	int n = my_strlen(str);
//	printf("%d", n);
//	return 0;
//}

//#include <stdlib.h>
//
//void Movenum(int a[], int sz)
//{
//	int* left = a;
//	int* right = a + sz - 1;
//
//	while (left < right)
//	{
//		while (((left < right) && (*left) % 2 != 0))
//		{
//			left++;
//		}
//		while (((left < right) && (*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i = 0;
//	int sz = (sizeof(a) / sizeof(a[0]));
//	Movenum(a, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>

#include <string.h>

int main()
{
	char str[100];
	int n = strlen(str);
	int x = (n / 2) + 1, count;
	for (int i = 0; i < x; i++)
	{
		if (str[i] == str[n - i])
		count++;
	}
	if (count == x)
		printf("是回文");
	else
		printf("不是回文");
	return 0;

}