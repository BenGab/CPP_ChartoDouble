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

double CharToDouble(char *value)
{
	double x = 0.0;
	char *ptr = value;
	int fraction = 1;
	bool hasampersand = false;
	int round = 0;
	int denom = 1;
	while (*ptr != '\0')
	{
		if (round > 0 && *ptr == '.')
		{
			hasampersand = true;
		}

		if (*ptr == '-')
		{
			fraction = -1;
		}

		if (*ptr < '0' || *ptr > '9')
		{
			++ptr;
			continue;
		}
		x = (x * 10) + (*ptr - '0');
		++ptr;
		++round;
		if (hasampersand)
		{
			denom *= 10;
		}
	}

	return (x / denom) * fraction;
}

