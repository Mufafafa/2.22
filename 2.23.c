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
	//	printf("���������룺");
	//	scanf("&s", password);
	//	if (strcmp(password, "123456")==0)//���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp
	//	{
	//		printf("������ȷ\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�������\n");
	//	}
	//}
	//if (i == 3)
	//{
	//	printf("��������������˳�����");
	//}



	//char arr1[] = " welcome to bite ";
	//char arr2[] = "                 ";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	////����int right = sizeof(arr1) / sizeof(arr1[0])-2;  �鷳
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(100);//��Ϣ0.1��
	//	system("cls");//cls-�����Ļ
	//	left++;
	//	right--;
	//}
	//printf("%s", arr2);


	//int arr[] = { 0,1,2,3,4,5,6,8,9,10,11 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//int left = 0;//���±�
	//int right = sz - 1;//���±�
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
	//		printf("�ҵ��ˣ��±���%d", k - 1);
	//		break;
	//	}
	//}
	//if (left > right)
	//	printf("�Ҳ���");


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("�ҵ��ˣ��±���%d", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("û�ҵ�");



	////����n�Ľ׳�
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
	//printf("����������:");
	//scanf("%s", password);
	//printf("ȷ������(Y/N)");
	//while((b=getchar())!='\n')
	//{
	//	;
	//}
	//scanf("%c",&a);
	//{
	//	if (a == 'Y')
	//		printf("ȷ�����");
	//	else
	//		printf("����ȷ��");
	//}


   /* int a = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�y/n����");
	a = getchar();
	if (a == 'y')
		printf("ȷ�����");
	else
		printf("����ȷ��");*/
	return 0;
}
