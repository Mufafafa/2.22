#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
////����һ���ṹ������struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "ľ��",20,"2020040606" };
//
//	struct Stu* ps = &s1;
//
//	printf("%s\n", s1.name);  //�ṹ��.��Ա��
//	printf("%s\n", (*ps).name);//ͬЧ
//	printf("%s\n", ps->name);//ͬЧ  //�ṹ��ָ��->��Ա��
//
//	printf("%d\n", s1.age);
//	printf("%d\n", (*ps).age);//ͬЧ
//	printf("%d\n", ps->age);//ͬЧ
//
//	printf("%s\n", s1.id);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	//00000000000000000000000000001011-----a=11
//	//00000000000000000000000000000100-----1<<2
//	//00000000000000000000000000001111-----��λ��a=15
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	//00000000000000000000000000001111-----a=15
//	//11111111111111111111111111111011-----~(1 << 2)
//	//00000000000000000000000000001011-----��λ��a=11
//	printf("%d\n", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4�������֣�
//	printf("%d\n", sizeof a);//ֻ��������ſ�ȥ������
//	printf("%d\n", sizeof(int));//�������ͣ�
//	printf("\n");
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));
//	printf("\n");
//	printf("%d\n", sizeof(p));//4or8,������4
//	printf("%d\n", sizeof(char*));
//	printf("\n");
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//ע�⣡����
//	                                 //�����������int [10]
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	printf("%d\n", a);
//	*p = 20;//�����ò���������ʵ���ǽ�a�ĳ�20
//	printf("%d\n", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	//32bit
//	//num&1==1��ͬʱ��1����1��
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	printf("%d", count);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	////������ʱ����
//	//int a = 3;
//	//int b = 5;
//	//int tmp = 0;
//	//printf("before:a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after:a=%d b=%d\n",a, b);
//
//
//	////�Ӽ��������ܻ��������������ʱ������
//	//int a = 3;
//	//int b = 5;
//	//printf("before:a=%d b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after:a=%d b=%d\n", a, b);
//
//
//	//���ķ���
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:a=%d b=%d\n", a, b);
//
//	return 0;
//}



