#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (count_bit_one(a) == 1)
//	{
//		printf("%d是二的次方数", a);
//	}
//	else
//		printf("%d不是二的次方数", a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int n = 0;
//	scanf("%d", &n);
//	a |= (1 << (n - 1));
//	printf("%d", a);
//	a &= ~(1 << (n - 1));
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//13
//	printf("%d", c);
//	return 0;
//}

struct Student
{
	char name[20];
	int age;
	float score;
};

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Student s1 = { "张三",20,99.9 };
	struct Student s2 = { "李四",18,88.8 };
	struct Point p = { 10,20 };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%lf\n", s1.score);
	printf("%d %d\n", p.x, p.y);
	return 0;
}