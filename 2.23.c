#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{


	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入密码：");
	//	scanf("&s", password);
	//	if (strcmp(password, "123456")==0)//不能用来比较两个字符串是否相等，应该使用一个库函数strcmp
	//	{
	//		printf("密码正确\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("输入错误\n");
	//	}
	//}
	//if (i == 3)
	//{
	//	printf("三次输入均错误，退出程序");
	//}



	//char arr1[] = " welcome to bite ";
	//char arr2[] = "                 ";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	////或者int right = sizeof(arr1) / sizeof(arr1[0])-2;  麻烦
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(100);//休息0.1秒
	//	system("cls");//cls-清空屏幕
	//	left++;
	//	right--;
	//}
	//printf("%s", arr2);


	//int arr[] = { 0,1,2,3,4,5,6,8,9,10,11 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	//int left = 0;//左下标
	//int right = sz - 1;//右下标
	//int k = 7;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是%d", k - 1);
	//		break;
	//	}
	//}
	//if (left > right)
	//	printf("找不到");


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("找到了，下标是%d", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("没找到");



	////计算n的阶乘
	//int n;
	//int i;
	//int pai=1;
	//scanf("%d", &n);
	//	for (i=1 ; i <= n; i++)
	//	{
	//		pai = pai * i;
	//		
	//	}
	//printf("%d", pai);


	//char password[20] = {0};
	//char a;
	//char b;
	//printf("请输入密码:");
	//scanf("%s", password);
	//printf("确认无误？(Y/N)");
	//while((b=getchar())!='\n')
	//{
	//	;
	//}
	//scanf("%c",&a);
	//{
	//	if (a == 'Y')
	//		printf("确认完成");
	//	else
	//		printf("放弃确认");
	//}


   /* int a = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（y/n）：");
	a = getchar();
	if (a == 'y')
		printf("确认完成");
	else
		printf("放弃确认");*/
	return 0;
}
