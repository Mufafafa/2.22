#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//                 //本质上arr是一个指针
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);不能放在这，因为sizeof(arr)结果为4，sz结果为1
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)//注意一定是<=
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//    //如果找到了返回这个数的下标；找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//应放在这里
//	int ret = binary_search(arr, k, sz);
//	                     //传送过去的是数组arr首元素的地址 
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}




//#include<stdio.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




//#include<stdio.h>
//void Swap1(int x, int y)//x,y形式参数
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)//pa，pb形式参数
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;//a，b实际参数
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);//调用Swap1函数-----传值调用------未能交换a和b
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//调用Swap2函数-----传址调用-----成功交换了a和b
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#######";
//	             //bit\0
//	strcpy(arr2, arr1); 
//	//strcpy---string copy---字符串拷贝
//	//strlen---string length---字符串长度有关
//	printf("%s\n", arr2);
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

