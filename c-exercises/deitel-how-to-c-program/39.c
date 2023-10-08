#include <stdarg.h>
#include <stdio.h>

/* variadic function in c */

double average(int num, ...)
{
	double sum = 0;

	va_list ap;
	va_start(ap, num);
	for (int i = 1; i <= num; i++)
	{
		sum += va_arg(ap, double);
	}
	va_end(ap);
	return (sum / num);
}

int main()
{
	printf("%.2f\n", average(3, 10.23, 20.95, 51.3223));
}
