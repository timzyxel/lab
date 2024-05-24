#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"

int main()
{
	char *locate = setlocale(LC_ALL, "");
	int n,x;
	printf("Выбери лабу 1-7\n");
	scanf("%d", &n);
	printf("выбери задачу (1,2)\n");
	scanf("%d", &x);
	if(x!=1 && x!=2)
	{
		printf("alert");
		system("pause");
		return 0;
	}
	switch (n) {
	case 1:
		if (x == 1)
			lr1();
		else
			lr1d();
		break;
	case 2:
		if (x == 1)
			lr2();
		else
			lr2d();
		break;
	case 3:
		if (x == 1)
			lr3();
		else
			lr3d();
		break;
	case 4:
		if (x == 1)
			lr4();
		else
			lr4d();
		break;
	case 5:
		if (x == 1)
			lr5();
		else
			lr5d();
		break;
	case 6:
		if (x == 1)
			lr6();
		else
			lr6d();
		break;
	case 7:
		if (x == 1)
			lr7();
		break;
	default:
		printf("alert");
	}
	system("pause");
	return 0;
}