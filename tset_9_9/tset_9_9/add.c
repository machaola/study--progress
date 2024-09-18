#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int math[20] = { 1,2 };
//	return 0;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}

	do
	{
		printf("%d ", arr[i]);
		i++;
	} while (i < 10);

	return 0;
}

//int main()
//{
//
//	return 0;
//}