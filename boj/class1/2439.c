#include <stdio.h>

int main(void)
{
	int	n;
	int	i;
	int	j;
	int	p;

	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		j = i;
		p = n - j;
		while (p)
		{
			printf(" ");
			p --;
		}
		while (j--)
			printf("*");
		printf("\n");
		i ++;
	}
	return (0);
}
			 
