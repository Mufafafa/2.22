#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//                 //������arr��һ��ָ��
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);���ܷ����⣬��Ϊsizeof(arr)���Ϊ4��sz���Ϊ1
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)//ע��һ����<=
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//    //����ҵ��˷�����������±ꣻ�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ӧ��������
//	int ret = binary_search(arr, k, sz);
//	                     //���͹�ȥ��������arr��Ԫ�صĵ�ַ 
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
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
//void Swap1(int x, int y)//x,y��ʽ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)//pa��pb��ʽ����
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
//	int b = 20;//a��bʵ�ʲ���
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);//����Swap1����-----��ֵ����------δ�ܽ���a��b
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//����Swap2����-----��ַ����-----�ɹ�������a��b
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
//	//strcpy---string copy---�ַ�������
//	//strlen---string length---�ַ��������й�
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

