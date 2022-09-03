#include <stdio.h>

int main(void)
{
	int	n;
	int	i;
	int	j;

	scanf("%d", &n);
	i = 0;
	while (i <= n)
	{
		j = -1;
		while (++j < i)
			printf("*");
		if ( i != 0)
			printf("\n");
		i ++;
	}
	return (0);
}
