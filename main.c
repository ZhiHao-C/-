#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mcl(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int i = 0;
int x = 0;
int y = 0;
int sum = 0;
int(*arr[5])(int x, int y)= { 0,Add,Sub,Mcl,Div };
int main()
{
	printf("            1.add       2.sub       ");
	printf("\n");
	printf("            3.mcl       4.div       ");
	printf("\n");
	printf("                  5.exit            ");
	printf("\n");
	//
	//do
	//{
	//	printf("��ѡ������Ҫ���ܶ�Ӧ������\n");
	//	scanf("%d", &i);
	//	switch (i)
	//	{
	//	case 1:Add(x, y);
	//		printf("������������\n");
	//		scanf("%d %d", &x, &y);
	//		sum = Add(x, y);
	//		printf("%d\n", sum);
	//		break;
	//	case 2:
	//		printf("������������\n");
	//		scanf("%d %d", &x, &y);
	//		sum = Sub(x, y);
	//		printf("%d\n", sum);
	//		break;
	//	case 3:
	//		printf("������������\n");
	//		scanf("%d %d", &x, &y);
	//		sum = Mcl(x, y);
	//		printf("%d\n", sum);
	//		break;
	//	case 4:
	//		printf("������������\n");
	//		scanf("%d %d", &x, &y);
	//		sum = Div(x, y);
	//		printf("%d\n", sum);
	//		break;
	//	case 5:
	//		printf("�����˳�\n");
	//		break;
	//	default :
	//		printf("ѡ�����\n");
	//	}
	//} while (i != 5);


	while (1)
	{
		printf("��ѡ������Ҫ���ܶ�Ӧ������\n");
		scanf("%d", &i);
		if (i == 5)
		{
			printf("�����˳�\n");
			break;
		}
		else if (i >= 1 && i < 5)
		{
			printf("������������\n");
			scanf("%d %d", &x, &y);
			sum = (*arr[i])(x, y);
			printf("%d\n", sum);

		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}

