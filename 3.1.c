#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i <= 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//[a] [b] [c] [\n]
//	char arr2[] = { 'a','b','c' };//[a] [b] [c]
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98,'c' };
//	char arr3[5] = "ab";
//	char arr4[] = "abc";//3个元素，长度为3，[4]
//    printf("%s\n", arr2);
//	printf("%d\n", sizeof(arr4));//计算arr4所占空间的大小，遇到\0不停止。【a b c \0】4个元素--4*1=4
//	printf("%d\n", strlen(arr4));//计算字符串的长度，遇到\0就停止，计算\0之前的字符个数。3
//	//sizeof 计算变量、数组、类型的所占空间的大小，单位字节。---操作符
//	//strlen 计算字符串的长度。---库函数，使用得引头文件
//	return 0;
//}



