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
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a',98,'c' };
//	char arr3[5] = "ab";
//	char arr4[] = "abc";//3��Ԫ�أ�����Ϊ3��[4]
//    printf("%s\n", arr2);
//	printf("%d\n", sizeof(arr4));//����arr4��ռ�ռ�Ĵ�С������\0��ֹͣ����a b c \0��4��Ԫ��--4*1=4
//	printf("%d\n", strlen(arr4));//�����ַ����ĳ��ȣ�����\0��ֹͣ������\0֮ǰ���ַ�������3
//	//sizeof ������������顢���͵���ռ�ռ�Ĵ�С����λ�ֽڡ�---������
//	//strlen �����ַ����ĳ��ȡ�---�⺯����ʹ�õ���ͷ�ļ�
//	return 0;
//}



