#include <stdio.h>

void find(int arr[], int x)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{

		j += i;
		if (j >= x)
			j = j - x;
		arr[j]++;
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	find(arr, 10);
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
			printf("%d ", i);
	}
	return 0;
}

//long fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	return 0;
//}


//long fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//long fun(int m, int n)
//{
//	return (fac(m) / (fac(n) * fac(m - n)));
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &m, &n);
//	printf("%d", fun(m, n));
//	return 0;
//}
