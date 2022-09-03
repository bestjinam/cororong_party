#include <stdio.h>

int	main(void)
{
	int	num[5];
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		scanf("%d", &num[i]);
		sum += num[i] * num[i];
		i ++;
	}
	printf("%d", sum % 10);
}
