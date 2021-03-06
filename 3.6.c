#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
////创建一个结构体类型struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "木筏",20,"2020040606" };
//
//	struct Stu* ps = &s1;
//
//	printf("%s\n", s1.name);  //结构体.成员名
//	printf("%s\n", (*ps).name);//同效
//	printf("%s\n", ps->name);//同效  //结构体指针->成员名
//
//	printf("%d\n", s1.age);
//	printf("%d\n", (*ps).age);//同效
//	printf("%d\n", ps->age);//同效
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
//	//00000000000000000000000000001111-----按位或a=15
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	//00000000000000000000000000001111-----a=15
//	//11111111111111111111111111111011-----~(1 << 2)
//	//00000000000000000000000000001011-----按位与a=11
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
//	printf("%d\n", sizeof(a));//4（用名字）
//	printf("%d\n", sizeof a);//只有这个括号可去！！！
//	printf("%d\n", sizeof(int));//（用类型）
//	printf("\n");
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));
//	printf("\n");
//	printf("%d\n", sizeof(p));//4or8,这里是4
//	printf("%d\n", sizeof(char*));
//	printf("\n");
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//注意！！！
//	                                 //数组的类型是int [10]
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	printf("%d\n", a);
//	*p = 20;//解引用操作符：其实就是将a改成20
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
//	//num&1==1（同时是1才是1）
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
//	//统计num的补码中有几个1
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
//	////创建临时变量
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
//	////加减法：可能会溢出（不创建临时变量）
//	//int a = 3;
//	//int b = 5;
//	//printf("before:a=%d b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after:a=%d b=%d\n", a, b);
//
//
//	//亦或的方法
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



