#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    printf("%d", Fun(2));
//    return 0;
//}

//int Fei(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fei(n - 1) + Fei(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fei(n));
//	return 0;
//}

//int cf(int n, int k)
//{
//	if (k > 0)
//	{
//		int x = n * cf(n, k - 1);
//		return x;
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", cf(n, k));
//	return 0;
//}

//int DigitSum(int n)
//{
//	int x = 0;
//	while (n)
//	{
//		x += n % 10;
//		n = n / 10;
//	}
//	return x;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}

//int Factorial(int n)
//{
//	int x = 0;
//	if (n > 0)
//	{
//		x = n * Factorial(n - 1);
//		return x;
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//printf("%d", Factorial(n));
//	int fact = 1;
//	while (n)
//	{
//		fact *= n;
//		n = n - 1;
//	}
//	printf("%d", fact);
//	return 0;
//}

void print(int n)
{
	printf("%d ", n % 10);
	if (n > 10)
		print(n / 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}