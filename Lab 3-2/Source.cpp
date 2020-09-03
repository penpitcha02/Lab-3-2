#include <stdio.h>
void P(int x) 
{
	int m = 1, sum = 0;
	while (m < x)
	{
		if (x % m == 0)
		{
			sum += m;
		}
		m++;
	}
	if (sum == x)
	{
		printf("%d ", x);
	}
}
int main()
{
	int x = 1;
		while (x <= 10000)
		{
			P(x);
			x++;
		}
		return 0;
}
