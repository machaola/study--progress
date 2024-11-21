#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int bin_search(int arr[], int left, int right, int key)
//{
//        while (left <= right) 
//        {
//            int mid = (right + left) / 2;
//            if (arr[mid] == key) 
//                return mid;
//            else if (arr[mid] < key) 
//                left = mid + 1;
//            else 
//                right = mid - 1;
//        }
//        return -1;
//    
//}
//// arr 是查找的数组
////left 数组的左下标
////right 数组的右下标
////key 要查找的数字
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int ret = bin_search(arr, 0, 9, 6);
//    printf("%d ", ret);
//
//	return 0;
//}

//void Multiplication_table(int x)
//{
//	int i = 0;
//	for (i = 1; i < x; i++)
//	{
//		int j = 0;
//		for (j = 1; j < x; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	Multiplication_table(x);
//	return 0;
//}


//int is_leap_year(int year) 
//{
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main() 
//{
//    int year = 0;
//    scanf("%d", &year);
//    if (is_leap_year(year)) 
//    {
//        printf("%d is a leap year.\n", year);
//    }
//    else 
//    {
//        printf("%d is not a leap year.\n", year);
//    }
//    return 0;
//}

//void is_prime(int x,int y)
//{
//	int i = 0;
//	for (i = x; i < y; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 1; j < i; j++)
//		{
//			if ((i % j) == 0)
//				count++;
//		}
//		if (count == 1)
//			printf("%d ", i);
//	}
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	is_prime(x, y);
//	return 0;
//}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < (sz / 2); i++)
	{
		int temp = arr[sz - 1 - i];
		arr[sz - 1 - i] = arr[i];
		arr[i] = temp;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr,sz);
	print(arr, sz);
	return 0;
}