

//改：

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//生成随机数1--100//RAND_MAX-32767
//	while (1)
//	{
//		printf("请输入一个的数：");
//		scanf("%d", &guess);
//		system("cls");
//		if (guess > ret)
//		{
//			printf("%d  猜大了\n",guess);
//		}
//		else if (guess < ret)
//		{
//			printf("%d  猜小了\n",guess);
//		}
//		else
//		{
//			printf("%d  恭喜你，猜对了\n",guess);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起点
//	do
//	{
//		printf("*****************************\n");
//		printf("****  1.play     2.exit  ****\n");
//		printf("*****************************\n");//进入菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();//进入猜数游戏
//			break;
//		case 2:
//			printf("退出游戏\n"); 
//			system("cls");
//			break;
//		default:
//			printf("输入错误\n");
//			system("cls");
//			break;
//		}
//	} while (input);
//	return 0;
//


//原;

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1.play     2.exit  ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 +1;//生成随机数1--100//RAND_MAX-32767
//	while (1)
//	{
//		printf("猜数游戏：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起点
//	do
//	{
//		menu();//进入菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//进入猜数游戏
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

