#include<stdio.h>
#include<conio.h>

double CharToDouble(char*);

int main(int argc, char* argv[])
{
	double x;
	char *value = "\n\t -123.456";

	x = CharToDouble(value);

	printf("\n%s -> %f", value, x);

	return 0;
}

