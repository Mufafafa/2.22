#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p=======%p\n", &arr[i],(p+i));
//		//&arr[i]��(p+i)�ȼ�
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - ���ַ����ĳ���
//	//ģ��ʵ��strlen   �������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[9] - arr[0]);//ָ��-ָ�룬��������м�Ԫ�ظ��������-С�ģ�
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//ָ��+����
//	}
//	return 0;
//}
