#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////6分
////void my_strcpy(char arr1[], char arr2[])
////{
////	while(*arr2 != '\0')
////	{
////		*arr1 = *arr2;
////		arr1++;
////		arr2++;
////	}
////	*arr1 = *arr2;
////}
//
//
////优化
////void my_strcpy(char arr1[], char arr2[])
////{
////	while (*arr2 != '\0')
////	{
////		*arr1++ = *arr2++;//区别
////	}
////	*arr1 = *arr2;
////}
//
////再优化，7分
//void my_strcpy(char arr1[], char arr2[])
//{
//	while (*arr1++ = *arr2++)//区别
//	{
//		;//注意，空语句
//	}
//	*arr1 = *arr2;
//}
//
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	//strcpy字符串拷贝
//	printf("%s", arr1);
//	return 0;
//}


