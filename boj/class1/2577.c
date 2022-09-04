#include <stdio.h>

int	main(void)
{
	int	n, num;
	int	i;
	int	res[10] = {0};

	i = -1;
	num = 1;
	while (++i < 3)
	{
		scanf("%d", &n);
		num *= n;
	}
	while (num)
	{
		res[num % 10] ++;
		num /= 10;
	}
	i = -1;
	while (++i < 10)
		printf("%d\n", res[i]); 
	
	return (0);
}
