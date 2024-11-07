#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//}
//
//
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//
//
//int main()
//{
//	int arr[] = { 2,5,8,9,7,6,4,3,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}

struct stu
{
	char name[20];
	int age;
};

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}


int cmp_stu_by_name(const void*p1,const void*p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return (((struct stu*)p1)->age - ((struct stu*)p2)->age);
}


void test1()
{
	int arr[] = { 2,5,8,9,7,6,4,3,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}


void test2()
{
	struct stu arr[] = { {"zhangsan",18}, {"lisi",25}, {"wangwu",30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

void test3()
{
	struct stu arr[] = { {"zhangsan",18}, {"lisi",25}, {"wangwu",30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}
