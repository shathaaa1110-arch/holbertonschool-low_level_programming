#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);
	char *op;

	/* التحقق من عدد المدخلات */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* جلب الدالة المناسبة */
	func = get_op_func(op);

	/* التحقق إذا العلامة غير صحيحة، أو كانت أكثر من حرف (مثل ++) */
	if (func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* التحقق من محاولة القسمة على صفر */
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* تنفيذ الدالة وطباعة النتيجة */
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
