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
	//���������
	int ret = 0;
	int guess = 0;
	//ʱ��� ��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��=��xxxx����
	 ret = rand()%100;//����1=100�����
	//printf("%d\n",ret);
	//2.������
	while (1)
	{
		printf("�������: > ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��>:");
			scanf("%d", &input);
		switch(input)
		{
		case 1 :
			game();//��������Ϸ
			break;
		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (0);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2d��λ��-2d�����
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int max = arr[];//���ֵ
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
//	//sqrt--��ƽ���Ŀ⺯��
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
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//�Գ���
//		//����2->i-1
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
//	//�㷨ʵ��a�з����ֵ��b��֮��c�з���Сֵ
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