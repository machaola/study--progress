#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	goto end;
//	printf("haha\n");
// end:
//	printf("end\n");
//	return 0;
//}

//int main()
//{
//again:
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("你的电脑将在120秒后关机，请打入我是猪\n");
//		scanf("%s", input);
//		if (strcmp("我是猪", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

#include <stdlib.h>
#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", rand()%100+1);
//	}
//	return 0;
//}

void menu()
{
	printf("*******************\n");
	printf("***** 1. play *****\n");
	printf("***** 0. exit *****\n");
	printf("*******************\n");
}

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 5;

	while (count)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
		printf("你还有%d机会\n", count);
	}
	if (count == 0)
		printf("用完了所有机会，猜数字失败\n");
}

int main()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("请选择:\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	} while(input);
	return 0;
}
