#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟后关机，输入213就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "213") == 0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}


	//int i;
	//int j;
	//int k;
	//for (i = 1; i < 10; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		k = i * j;
	//		printf("%d*%d=%-2d ", i, j, k);
	//	}
	//	printf("\n");
	//}


	/*int arr[] = { -1,-2,-3,0,1,2,3,4,5,6 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d", max);*/


	//int i=0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;
	//	flag = -flag;
	//}
	//printf("%lf", sum);


	//int i;
	//int count=0;
	//for (i = 101; i <= 200; i+=2)//区别在这
	//{
	//	//素数：只能被1和自身整除
	//	//试除法，产生2到i-1
	//	int j;
	//	for (j = 2; j <= sqrt(i); j++)//sqrt开平方的数学库函数,此方法试除次数将减少
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j >sqrt(i))
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d", count);


	////求两个数的最大公约数：辗转相除法
	//int a, b, r=0;
	//scanf("%d %d", &a, &b);
	//while (r=a % b)
	//{
	//	a = b;
	//	b = r;
	//}
	//printf("%d", b);


	/*int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}*/


	/*int a, b, c;
			   scanf("%d%d%d", &a, &b, &c);
			   if (a < b)
			   {
				   int 临时站 = b;
				   b = a;
				   a = 临时站;
			   }
			   if (a < c)
			   {
				   int 临时站 = c;
				   c = a;
				   a = 临时站;
			   }
			   if (b < c)
			   {
				   int 临时站 = b;
				   b = c;
				   c = 临时站;
			   }
			   printf("%d %d %d", a, b, c);*/


			   /*int a, b, c;
							 scanf("%d %d %d", &a, &b, &c);
							 if (a > b && b > c)
								 printf("%d %d %d", a, b, c);
							 else if (a > c && c > b)
								 printf("%d %d %d", a, c, b);
							 else if (b > a && a > c)
								 printf("%d %d %d", b, a, c);
							 else if (b > c && c > a)
								 printf("%d %d %d", b, c, a);
							 else if (c > a && a > b)
								 printf("%d %d %d", c, a, b);
							 else
								 printf("%d %d %d", c, b, a);*/
	return 0;
}
