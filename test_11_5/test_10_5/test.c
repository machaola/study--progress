#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void Print(int(*arr)[5], int h, int l)
//{
//	int i = 0;
//	for (i = 0; i < h; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l; j++)
//		{
//			printf("%d ", arr[i][j]);//arr[i][j]=*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}

//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(*pf)(int, int) = Add;
//	int ret = pf(4, 5);
//	printf("%d\n", ret);
//	int ret1 = (*pf)(4, 5);
//	printf("%d\n", ret1);
//	int ret2 = Add(4, 5);
//	printf("%d\n", ret2);
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();
//	void (*signal(int, void(*)(int)))(int);
//	return 0;
//}

//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num = 0;
//	unit num1 = 0;
//	return 0;
//}

//typedef int* pint;
//
//int main()
//{
//	int* p;
//	pint p1;
//	return 0;
//}

//typedef  int(*parr)[6];
//
//int main()
//{
//	int arr[6] = { 0 };
//	int(*p)[6] = &arr;
//	parr p1 = &arr;
//	return 0;
//}

//typedef  int (*parr)(int, int);
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	parr pf1 = Add;
//	return 0;
//}

int Sub(int x,int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int main()
{
	//int (*pf1)(int, int) = Add;
	//int (*pf2)(int, int) = Sub;
	//int (*pf3)(int, int) = Mul;
	//int (*pf4)(int, int) = Div;
	int (*pf[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pf[i](6, 2);
		printf("%d\n", ret);
	}
	return 0;
}