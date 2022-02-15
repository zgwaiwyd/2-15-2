#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************\n");
	printf("****   1.play   0.exit   ****\n");
	printf("*****************************\n");
}
void game()
{
	//生成随机数
	int ret = 0;
	int guess = 0;
	//时间戳 当前计算机的时间-计算机的起始时间（1970.1.1.0:0:0）=（xxxx）秒
	 ret = rand()%100;//生成1=100随机数
	//printf("%d\n",ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字: > ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
			scanf("%d", &input);
		switch(input)
		{
		case 1 :
			game();//猜数字游戏
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (0);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//确定打印九行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2d两位数-2d左对齐
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int max = arr[];//最大值
//	int max = arr[1];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		printf("\n%d\n", i);
//		 if (i / 10 == 9)
//			 printf("\n%d\n", i);
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//sqrt--开平方的库函数
//	for (i = 100; i <= 200; i++)
//	{
//	
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf(" %d ", i);
//		}
//		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year =0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int q = a;
//		a = b;
//		b = q;
//	}
//	if (a < c)
//	{
//		int w = a;
//		a = c;
//		c = w;
//	}
//	if (b < c)
//	{
//		int e = b;
//		b = c;
//		c = e;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int f = 0;
//	int m = 0;
//	int q = 0;
//	scanf_s("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现a中放最大值；b次之；c中放最小值
//	if (a<b)
//	{
//		int f = a;
//		a = b;
//		b = f;
//	}
//	if (a<c)
//	{
//		int m = a;
//		a = c;
//		c = m;
//	}
//	if (b<c)
//	{
//		int q = b;
//		b = c;
//		c = q;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}