#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"

int lr1()
{
	printf("��������� ax^2+bx+c=0\n");
	float a, b, c; //��������� ax^2+bx+c=0
	int n = 0;
	float D;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	float eps = 0.0000000001;
	float x1, x2 = c / a;
	D = b * b - 4 * a * c; //����� ��������� � 1�� ������
	if (D <= eps && D >= -eps) //��� ����������� ��� C ����� ���� ����� ������� ��	5.00000000000000000 ������� 5.00000000000000001
	{
		x1 = (-b) / 2 * a;
		printf("x = %f\n", x1);
	}
	else
	{
		if (c / a >= 0) //������� �������� c/a ������������� ��� ������ ������ ���� �� �������� � �������� ��� ��������
		{
		for (; x2 >= (-c / a); x2 -= 0.000001) //�� �������� � �������� �������� �� ��������� ����� ���� �� ������ �� ����� ��� ���������� ���
		{
		x1 = (c / a) / x2; //����������� x1 ��� x2 �� ������� �����
		if (x1 + x2 <= -(b / a) - eps && x1 + x2 >= -(b / a) + eps) //��� ����������� �������� �� �� ��� ���������� ������� �� ���������.���� �� �� ������� �� �����
		{
		n = 1; //�������� ��� ����� ����
		break; //������� �� �����
		}
		}
		}
		else //��� ���� ��� � ��� ������ � ������ �������
		{
			for (; x2 <= (-c / a); x2 += 0.000001)
			{
				x1 = (c / a) / x2;
				if (x1 + x2 <= -(b / a) - eps && x1 + x2 >= -(b / a) + eps)
				{
					n = 1;
					break;
				}
			}
		}
		if (n == 0)
		{
			printf("null");
		}
		else {
			printf("%f\n", x1);
			printf("%f\n", x2);
		}
	}
	return 0;
}
int lr1d()
{
	printf("NULL");
	return 0;
}
int lr2()
{
	printf("��������� ����� ������ ��������� ���� 1+(1*3)/(1*4)\n");
	int n;
	float x = 1, a = 1, b = 1;
	printf("N = ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		a = a * (1 + (2 * i));
		b = b * (1 + (3 * i));
		x += a / b;
	}
	printf("%f\n", x);	
	return 0;
}
int lr2d()
{
	printf("������� ����������� ������� �����\n");
	float a, b;
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("%f\n", sum(a, b));
	
	return 0;
}
int lr3()
{
	printf("���������� �������� �� ��� ����� �� ������ �������� ������� ���������� �����\n");
	getchar();
	printf("enter words:\n");
	char c;
	int cnt_max = 0, cnt=0,r=1;
    int flag=1;
	while ((c = getchar()) != EOF)
	{
		//if (c == '\n')
			//break;
		if (c == ' ')
		{
			if (cnt_max == 0)
				cnt_max = cnt;
			else
			{
				if (cnt_max != cnt)
				{
					flag=0;
				}
			}
			cnt = 0;
			r++;
		}
		else //if(c!=','|| c != '.'|| c != '\n' ||c!=' ')
		{
			cnt++;
		}
	}


	if (cnt_max == 0)
		cnt_max = cnt;
	if (cnt_max != cnt)
	{
		flag=0;
	}
	if(flag==1)
	printf("Yes\n");
	else
	printf("No\n");	
	//printf("\n%d", r);
	
	return 0;

}



int lr3d()
{
	printf("���������� ������� ���������� ����");
	getchar();
	printf("enter words:\n");
	char c;
	int cnt_max = 0, cnt=0,r=1;
    int flag=1;
	while ((c = getchar()) != EOF)
	{
		//if (c == '\n')
			//break;
		if (c == ' ')
		{
			if (cnt_max == 0)
				cnt_max = cnt;
			else
			{
				if (cnt_max != cnt)
				{
					flag=0;
				}
			}
			cnt = 0;
			r++;
		}
		else //if(c!=','|| c != '.'|| c != '\n' ||c!=' ')
		{
			cnt++;
		}
	}


	if (cnt_max == 0)
		cnt_max = cnt;
	if (cnt_max != cnt)
	{
		flag=0;
	}
	if(flag==1)
	printf("Yes\n");
	else
	printf("No\n");	
	printf("\n%d", r);
	
	return 0;
}

int lr4()
{
	printf("������� ��� ����� �� ������");
	char line[1000];
	getchar();
	gets(line);
	process4(line);
	puts(line);
	
	return 0;
}
int lr4d()
{
	printf("��� ��� gets");
	char line[1000];
	char c;
	int j = 0;
	getchar();
	while ((c = getchar()) != '\n')
	{
		
		if (!('0' <= c && '9' >= c))
		{
			line[j] = c;
			j++;

		}
	}
	puts(line);
	
	return 0;
}
int lr5()
{
	printf("� ������� �� 10 ����� ����� ��������� ����� ��������� � ������� �������� � ����� ��������� � ��������� ��������. �������� �������� � ��������� ��������, ���� �� ����� ������. � ��������� ������ �������� �������� � ������� ��������.\n");
	int a = 0, b = 0, n = 10;
	int x[10];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
		if (x[i] % 2 == 0)
			a += x[i];
		else
			b += x[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a <= b)
		{
			if (x[i] % 2 == 0)
				x[i] = 0;
		}
		else
		{
			if (x[i] % 2 == 1)
				x[i] = 0;
		}
		printf("%d ", x[i]);
	}
	
	return 0;
}
lr5d()
{
	printf("� ������� �� 10 ����� ����� ��������� ����� ��������� � ������� �������� � ����� ��������� � ��������� ��������. �������� �������� � ��������� ��������, ���� �� ����� ������. � ��������� ������ �������� �������� � ������� ��������. ���� ��������� �� ����������\n");
	int a = 0, b = 0, n = 10;
	int x[10];
	int reg = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
		if (i > 0 && x[i] >= x[i - 1])
			reg = 1;
		if (x[i] % 2 == 0)
			a += x[i];
		else
			b += x[i];
	}
	if (reg = 1) {
		for (int i = 0; i < n; i++)
		{
			if (a <= b)
			{
				if (x[i] % 2 == 0)
					x[i] = 0;
			}
			else
			{
				if (x[i] % 2 == 1)
					x[i] = 0;
			}
			printf("%d ", x[i]);
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
			printf("%d ", x[i]);
	}
	
	return 0;

}

lr6()
{
	printf("� ��������� ������������� ������� ������� N �� K �������� ������, ������� �������������� ������� ������ �������� ��������������� �� ����� �������\n");
	int n = 3, k = 5;
	int sum, sumall = 0;
	int x[3][5];
	int str_sum[3];
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &x[i][j]);
			sum += x[i][j];
		}
		str_sum[i] = sum;
		sumall += sum;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if ((str_sum[i] / k) < (sumall / (n*k)))
				x[i][j] = 0;
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("%d ", sumall);
	
	return 0;
}

lr6d()
{
	printf("� ��������� ������������� ������� ������� N �� K �������� ������, ������� �������������� ������� ������ �������� ��������������� �� ����� �������\n");
	int n = 3, k = 3;
	int x[3][3];
	int x1[9];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &x[i][j]);
		}

	}
	for (int i1 = 0; i1 < n; i1++)
	{
		
		for (int j1 = 0; j1 < k; j1++)
		{
			int count = 0, n1 = 0, k1 = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < k; j++)
				{
					if (x[i1][j1] > x[i][j])count++;
				}
			}
			/*printf("count %d ", count);
			while (count != 0)
			{
				if (count > k)
				{
					n1++;
					count = count - k;
				}
				else
				{
					k1 = count;
					count = 0;
				}
			}
			printf("n1 %d", n1);
			printf("k1 %d\n", k1);*///
			//printf("count %d ", count);
			x1[count] = x[i1][j1];
			//printf("count[x] %d\n", x1[count]);
		}
	}
	for (int i = 0; i < n*k; i++)
	{
		printf("%d ",x1[i]);
		if(i%3==2)
			printf("\n");
	}
	
	return 0;
	
}
lr7()
{
	printf("� ������ ����� �������� ������ ����� N �������� ������� �������� ������� � ���������� �������\n");
	int n = 0;
	scanf("%d", &n);
	reverse_bits_in_long(&n);
	printf("%d", n);
	
	return 0;
}
