

//�ģ�

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//���������1--100//RAND_MAX-32767
//	while (1)
//	{
//		printf("������һ��������");
//		scanf("%d", &guess);
//		system("cls");
//		if (guess > ret)
//		{
//			printf("%d  �´���\n",guess);
//		}
//		else if (guess < ret)
//		{
//			printf("%d  ��С��\n",guess);
//		}
//		else
//		{
//			printf("%d  ��ϲ�㣬�¶���\n",guess);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�����������������������
//	do
//	{
//		printf("*****************************\n");
//		printf("****  1.play     2.exit  ****\n");
//		printf("*****************************\n");//����˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();//���������Ϸ
//			break;
//		case 2:
//			printf("�˳���Ϸ\n"); 
//			system("cls");
//			break;
//		default:
//			printf("�������\n");
//			system("cls");
//			break;
//		}
//	} while (input);
//	return 0;
//


//ԭ;

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1.play     2.exit  ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 +1;//���������1--100//RAND_MAX-32767
//	while (1)
//	{
//		printf("������Ϸ��");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�����������������������
//	do
//	{
//		menu();//����˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//���������Ϸ
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

